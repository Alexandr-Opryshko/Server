#include"MyClass.h"


namespace Form {
	

	//#############################################################################################################
	BazaObject::BazaObject(int column, int size) {
		if (this->column < column) {
			int** arrayTemp;

			arrayTemp = new int* [column+1]{};							// ������ ����������
			for (int i = 0; i < column; i++) {							// 

				arrayTemp[i] = new int[size+1]{};						// ������������� ���������� �� ������ ��������
				for (int j = 0; j < size && j < this->size;j++) {		// �� ������� �� ���������� �������
					arrayTemp[i][j] = arrayBazaObject[i][j];			// ��������� ��������� �������
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
		arrayBazaObject = new int* [this->column]{};					// ������ ����������
		for (int i = 0; i < this->column; i++){							// 
			arrayBazaObject[i] = new int[this->size]{};					// ������������� ����������
		}
		
	}

	BazaObject::~BazaObject() {
		for (int i = 0; i < this->column; i++) {
			delete[] arrayBazaObject[i];
		}
		delete[] arrayBazaObject;
	}

	//#############################################################################################################
	
	/// <summary> ����������� �������� ����������� ���������� �� ��������� </summary>
	/// <returns></returns>
	Object::Object() {	
		this->directionConnect = directionConnectDef;	// ���������� ����������� (0-99)
		this->numberObject = numberObjectDef;			// ����� ������� (0-9999)
		this->typePPC = typePPCDef;						// ��� ����������
		this->ipPPC = IPDef;							// IP �������
		this->portPPC = PortDef;						// Port �������
	}
	/// <summary> ���������� ����������� ���������� </summary>
	/// <returns></returns>
	Object::~Object() {
		delete this;
	}

	//#############################################################################################################
	
	/// <summary> ����������� ���������� ������� </summary>
	/// <param name="typeProtocol"></param>
	/// <param name="timeControl"></param>
	/// <param name="localHostIP"></param>
	/// <param name="localHostPort"></param>
	/// <returns></returns>
	SettingsServer::SettingsServer(
		int typeProtocol,								// ��� ��������� (TCP/UDP)
		int timeControl,								// ����� �������� ������� �����(���)
		unsigned long localHostIP,						// ���� IP
		unsigned int localHostPort						// ���� Port
	) {
		Set_typeProtocol(typeProtocol);					// ��� ��������� (TCP/UDP)
		Set_timeControl(timeControl);					// ����� �������� ������� �����(���)
		Set_localHostIP(localHostIP);					// ���� IP
		Set_localHostPort(localHostPort);				// ���� Port
	}
	/// <summary> ����������� ������� �� ��������� </summary>
	/// <returns></returns>
	SettingsServer::SettingsServer() {
		this->typeProtocol = typeProtocolDef;			// ��� ��������� (TCP/UDP)
		this->timeControl = timeControlDef;				// ����� �������� ������� �����(���)
		this->localHostIP = IPDef;						// ���� IP
		this->localHostPort = PortDef;					// ���� Port
		return;
	}
	/// <summary> ���������� ������� </summary>
	/// <returns></returns>
	SettingsServer::~SettingsServer() {
		delete this;
	}
	//#############################################################################################################
	
	/// <summary> ����������� ���������� IP������ </summary>
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
		int typeProtocol,								// ��� ��������� (TCP/UDP)
		int timeControl,								// ����� �������� ������� �����(���)
		unsigned long localHostIP,						// ���� IP
		unsigned int localHostPort,						// ���� Port
		unsigned long serverIP,							// IP ���������� �������
		unsigned int serverPort,						// Port ���������� �������
		unsigned long serverRezervIP,					// IP ���������� ���������� �������
		unsigned int serverRezervPort					// Port ���������� ���������� �������
	) : SettingsServer::SettingsServer(
		typeProtocol,									// ��� ��������� (TCP/UDP)
		timeControl,									// ����� �������� ������� �����(���)
		localHostIP,									// ���� IP
		localHostPort									// ���� Port
	){
		Set_serverIP(serverIP);							// IP ���������� �������
		Set_serverPort(serverPort);						// Port ���������� �������
		Set_serverRezervIP(serverRezervIP);				// IP ���������� ���������� �������
		Set_serverRezervPort(serverRezervPort);			// Port ���������� ���������� �������
	}
	/// <summary> ����������� IP-������� �� ��������� </summary>
	/// <returns></returns>
	SettingsIPClient::SettingsIPClient(): SettingsServer() {
		this->serverIP = IPDef;							// IP ���������� �������
		int serverPort = PortDef;						// Port ���������� �������
		unsigned long serverRezervIP = IPDef;			// IP ���������� ���������� �������
		unsigned int serverRezervPort = PortDef;		// Port ���������� ���������� �������

	}
	/// <summary> ���������� IP ������� </summary>
	/// <returns></returns>
	SettingsIPClient::~SettingsIPClient() {
		delete this;
	}
}