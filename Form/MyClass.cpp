#include"MyClass.h"


namespace Form {
	

	Object::Object() {
	}

	Object::~Object() {
	}


	//#############################################################################################################
	
	/// <summary> Конструктор параметров сервера </summary>
	/// <param name="typeProtocol"></param>
	/// <param name="timeControl"></param>
	/// <param name="localHostIP"></param>
	/// <param name="localHostPort"></param>
	/// <returns></returns>
	SettingsServer::SettingsServer(
		int typeProtocol,								// тип протокола (TCP/UDP)
		int timeControl,								// время проверки наличия связи(сек)
		unsigned long localHostIP,						// Свой IP
		unsigned int localHostPort						// свой Port
	) {
		this->typeProtocol = typeProtocol;				// тип протокола (TCP/UDP)
		this->timeControl = timeControl;				// время проверки наличия связи(сек)
		this->localHostIP = localHostIP;				// Свой IP
		this->localHostPort = localHostPort;			// свой Port
	}
	/// <summary> Конструктор сервера по умолчанию </summary>
	/// <returns></returns>
	SettingsServer::SettingsServer() {
		this->typeProtocol = typeProtocolDef;			// тип протокола (TCP/UDP)
		this->timeControl = timeControlDef;				// время проверки наличия связи(сек)
		this->localHostIP = IPDef;						// Свой IP
		this->localHostPort = PortDef;					// свой Port
		return;
	}
	/// <summary> Деструктор сервера </summary>
	/// <returns></returns>
	SettingsServer::~SettingsServer() {
	}
	//#############################################################################################################
	
	/// <summary> Конструктор параметров IPклиент </summary>
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
		int timeControl,								// время проверки наличия связи(сек)
		unsigned long localHostIP,						// Свой IP
		unsigned int localHostPort,						// свой Port
		unsigned long serverIP,							// IP удаленного сервера
		unsigned int serverPort,						// Port удаленного сервера
		unsigned long serverRezervIP,					// IP резервного удаленного сервера
		unsigned int serverRezervPort					// Port резервного удаленного сервера
	) : SettingsServer::SettingsServer(
		typeProtocol,									// тип протокола (TCP/UDP)
		timeControl,									// время проверки наличия связи(сек)
		localHostIP,									// Свой IP
		localHostPort									// свой Port
	){
		this->serverIP = serverIP;						// IP удаленного сервера
		this->serverPort = serverPort;					// Port удаленного сервера
		this->serverRezervIP = serverRezervIP;			// IP резервного удаленного сервера
		this->serverRezervPort = serverRezervPort;		// Port резервного удаленного сервера
	}
	/// <summary> Конструктор IP-клиента по умолчанию </summary>
	/// <returns></returns>
	SettingsIPClient::SettingsIPClient(): SettingsServer() {
		this->serverIP = IPDef;							// IP удаленного сервера
		int serverPort = PortDef;						// Port удаленного сервера
		unsigned long serverRezervIP = IPDef;			// IP резервного удаленного сервера
		unsigned int serverRezervPort = PortDef;		// Port резервного удаленного сервера

	}

	SettingsIPClient::~SettingsIPClient() {
	}
}