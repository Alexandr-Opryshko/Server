#include"MyClass.h"

namespace Form {


	unsigned int Object::Set_directionConnect(unsigned int directionConnect) {		// ���������� ����������� (0-99)
		return this->directionConnect = directionConnect > 99 ? -1 : directionConnect;
	}
	unsigned int Object::Set_numberObject(unsigned int numberObject) {				// ����� ������� (0-9999)
		return this->numberObject = numberObject > 9999 ? -1 : numberObject;
	}
	int Object::Set_typePPC(int typePPC) {											// ��� ����������
		return this->typePPC = typePPC;
	}
	unsigned long Object::Set_ipPPC(unsigned long ipPPC) {							// IP �������
		return this->ipPPC = ipPPC;
	}
	unsigned int Object::Set_portPPC(unsigned int portPPC) {						// Port �������
		return this->portPPC = portPPC;
	}


//################################################################ ������ ##############################################
	/// <summary> Set ����� ��� ��������� ��������� </summary>
	/// <param name="typeProtocol"></param>
	/// <returns></returns>
	int SettingsServer::Set_typeProtocol(int typeProtocol) {						// ��� ��������� (TCP/UDP)
		if (typeProtocol != TCP && typeProtocol != UDP) 
			typeProtocol = typeProtocolDef;
		return this->typeProtocol = typeProtocol;
	}
	/// <summary> Set ����� ��� ��������� ������� �������� ������ ��� �������� ����� </summary>
	/// <param name="timeControl"></param>
	/// <returns></returns>
	int SettingsServer::Set_timeControl(int timeControl) {							// ����� �������� ������� �����(���)
		if (timeControl < timeControlMin) timeControl = timeControlMin;				// ��������� ����������� ��������
		return this->timeControl = timeControl;
	}
	/// <summary> Set ����� ��� ��������� ������ IP </summary>
	/// <param name="localHostIP"></param>
	/// <returns></returns>
	unsigned long SettingsServer::Set_localHostIP(unsigned long localHostIP) {		// ���� IP
		if (localHostIP < IP_Min) localHostIP = IPDef;
		return this->localHostIP = localHostIP;
	}
	unsigned int SettingsServer::Set_localHostPort(unsigned int localHostPort) {	// ���� Port
		return this->localHostPort = localHostPort;
	}

//################################################################ IP ������ ###########################################

	unsigned long SettingsIPClient::Set_serverIP(unsigned long serverIP) {			// IP ���������� �������
		if (serverIP < IP_Min) serverIP = IPDef;
		return this->serverIP = serverIP;
	}
	unsigned int SettingsIPClient::Set_serverPort(unsigned int serverPort) {		// Port ���������� �������
		return this->serverPort = serverPort;
	}
	unsigned long SettingsIPClient::Set_serverRezervIP(unsigned long serverRezervIP) {		// IP ���������� ���������� �������
		if (serverRezervIP < IP_Min) serverRezervIP = IPDef;
		return this->serverRezervIP = serverRezervIP;
	}
	unsigned int SettingsIPClient::Set_serverRezervPort(unsigned int serverRezervPort) {	// Port ���������� ���������� �������
		return this->serverRezervPort = serverRezervPort;
	}
}