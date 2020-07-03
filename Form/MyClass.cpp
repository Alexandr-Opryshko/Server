#include"MyClass.h"


namespace Form {
	

	//#############################################################################################################
	BazaObject::BazaObject(int column, int size) {
		if (this->column < column) {
			int** arrayTemp;

			arrayTemp = new int* [column+1]{};							// массив указателей
			for (int i = 0; i < column; i++) {							// 

				arrayTemp[i] = new int[size+1]{};						// инициализаци€ указателей на массив объектов
				for (int j = 0; j < size && j < this->size;j++) {		// то пройдем по указател€м объекта
					arrayTemp[i][j] = arrayBazaObject[i][j];			// скопируем указатели объекта
				}
			}
			if (this->column > 0) {
				for (int i = 0; i < this->column; i++) {
					delete[] arrayBazaObject[i];
				}
				delete[] arrayBazaObject;
			}
			this->column = column;
			this->size = size;
			this->arrayBazaObject = arrayTemp;
		}
	}

	BazaObject::BazaObject() {
		this->column = directionConnectDef + 1;
		this->size = numberObjectDef + 1;
		arrayBazaObject = new int* [this->column]{};					// массив указателей
		for (int i = 0; i < this->column; i++){							// 
			arrayBazaObject[i] = new int[this->size]{};					// инициализаци€ указателей
		}
		
	}

	BazaObject::~BazaObject() {
		for (int i = 0; i < this->column; i++) {
			delete[] arrayBazaObject[i];
		}
		delete[] arrayBazaObject;
	}

	//#############################################################################################################
	
	/// <summary>  онструктор создани€ объектового устройства по умолчанию </summary>
	/// <returns></returns>
	Object::Object() {	
		this->directionConnect = directionConnectDef;	// Ќапрвление подключени€ (0-99)
		this->numberObject = numberObjectDef;			// номер объекта (0-9999)
		this->typePPC = typePPCDef;						// тип устройства
		this->ipPPC = IPDef;							// IP прибора
		this->portPPC = PortDef;						// Port прибора
	}
	/// <summary> ƒеструктор объектового устройства </summary>
	/// <returns></returns>
	Object::~Object() {
		delete this;
	}

	//#############################################################################################################
	
	/// <summary>  онструктор параметров сервера </summary>
	/// <param name="typeProtocol"></param>
	/// <param name="timeControl"></param>
	/// <param name="localHostIP"></param>
	/// <param name="localHostPort"></param>
	/// <returns></returns>
	SettingsServer::SettingsServer(
		int typeProtocol,								// тип протокола (TCP/UDP)
		int timeControl,								// врем€ проверки наличи€ св€зи(сек)
		unsigned long localHostIP,						// —вой IP
		unsigned int localHostPort						// свой Port
	) {
		Set_typeProtocol(typeProtocol);					// тип протокола (TCP/UDP)
		Set_timeControl(timeControl);					// врем€ проверки наличи€ св€зи(сек)
		Set_localHostIP(localHostIP);					// —вой IP
		Set_localHostPort(localHostPort);				// свой Port
	}
	/// <summary>  онструктор сервера по умолчанию </summary>
	/// <returns></returns>
	SettingsServer::SettingsServer() {
		this->typeProtocol = typeProtocolDef;			// тип протокола (TCP/UDP)
		this->timeControl = timeControlDef;				// врем€ проверки наличи€ св€зи(сек)
		this->localHostIP = IPDef;						// —вой IP
		this->localHostPort = PortDef;					// свой Port
		return;
	}
	/// <summary> ƒеструктор сервера </summary>
	/// <returns></returns>
	SettingsServer::~SettingsServer() {
		delete this;
	}
	//#############################################################################################################
	
	/// <summary>  онструктор параметров IPклиент </summary>
	/// <param name="typeProtocol"></param>
	/// <param name="timeControl"></param>
	/// <param name="localHostIP"></param>
	/// <param name="localHostPort"></param>
	/// <param name="serverIP"></param>
	/// <param name="serverPort"></param>
	/// <param name="serverRezervIP"></param>
	/// <param name="serverRezervPort"></param>
	/// <returns></returns>
	SettingsIPClient::SettingsIPClient(
		int typeProtocol,								// тип протокола (TCP/UDP)
		int timeControl,								// врем€ проверки наличи€ св€зи(сек)
		unsigned long localHostIP,						// —вой IP
		unsigned int localHostPort,						// свой Port
		unsigned long serverIP,							// IP удаленного сервера
		unsigned int serverPort,						// Port удаленного сервера
		unsigned long serverRezervIP,					// IP резервного удаленного сервера
		unsigned int serverRezervPort					// Port резервного удаленного сервера
	) : SettingsServer::SettingsServer(
		typeProtocol,									// тип протокола (TCP/UDP)
		timeControl,									// врем€ проверки наличи€ св€зи(сек)
		localHostIP,									// —вой IP
		localHostPort									// свой Port
	){
		Set_serverIP(serverIP);							// IP удаленного сервера
		Set_serverPort(serverPort);						// Port удаленного сервера
		Set_serverRezervIP(serverRezervIP);				// IP резервного удаленного сервера
		Set_serverRezervPort(serverRezervPort);			// Port резервного удаленного сервера
	}
	/// <summary>  онструктор IP-клиента по умолчанию </summary>
	/// <returns></returns>
	SettingsIPClient::SettingsIPClient(): SettingsServer() {
		this->serverIP = IPDef;							// IP удаленного сервера
		int serverPort = PortDef;						// Port удаленного сервера
		unsigned long serverRezervIP = IPDef;			// IP резервного удаленного сервера
		unsigned int serverRezervPort = PortDef;		// Port резервного удаленного сервера

	}
	/// <summary> ƒеструктор IP клиента </summary>
	/// <returns></returns>
	SettingsIPClient::~SettingsIPClient() {
		delete this;
	}
}