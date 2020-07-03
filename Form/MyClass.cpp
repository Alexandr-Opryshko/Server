#include"MyClass.h"


namespace Form {
	

	Object::Object() {
	}

	Object::~Object() {
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
		this->typeProtocol = typeProtocol;				// ��� ��������� (TCP/UDP)
		this->timeControl = timeControl;				// ����� �������� ������� �����(���)
		this->localHostIP = localHostIP;				// ���� IP
		this->localHostPort = localHostPort;			// ���� Port
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
		this->serverIP = serverIP;						// IP ���������� �������
		this->serverPort = serverPort;					// Port ���������� �������
		this->serverRezervIP = serverRezervIP;			// IP ���������� ���������� �������
		this->serverRezervPort = serverRezervPort;		// Port ���������� ���������� �������
	}
	/// <summary> ����������� IP-������� �� ��������� </summary>
	/// <returns></returns>
	SettingsIPClient::SettingsIPClient(): SettingsServer() {
		this->serverIP = IPDef;							// IP ���������� �������
		int serverPort = PortDef;						// Port ���������� �������
		unsigned long serverRezervIP = IPDef;			// IP ���������� ���������� �������
		unsigned int serverRezervPort = PortDef;		// Port ���������� ���������� �������

	}

	SettingsIPClient::~SettingsIPClient() {
	}
}