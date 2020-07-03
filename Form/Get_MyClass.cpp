#include"MyClass.h"

namespace Form {

	//###################################################################

	/// <summary> Get ����� ���� ��������� ����� </summary>
	/// <returns></returns>
	const int SettingsServer::Get_typeProtocol() const {					// ��� ��������� (TCP/UDP)
		return this->typeProtocol;
	}
	/// <summary> Get ����� ������� �������� �������� ������� ����� </summary>
	/// <returns></returns>
	const int SettingsServer::Get_timeControl() const {						// ����� �������� ������� �����(���)
		return this->timeControl;
	}
	/// <summary> Get ����� ������ IP ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsServer::Get_localHostIP() const {			// ���� IP
		return this->localHostIP;
	}
	/// <summary> Get ����� ������ ����� </summary>
	/// <returns></returns>
	const unsigned int SettingsServer::Get_localHostPort() const {			// ���� Port
		return this->localHostPort;
	}

	//#########################################################

	/// <summary> Get ����� IP ������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverIP() const {			// IP ���������� �������
		return this->serverIP;
	}
	/// <summary> Get ����� ��������� ����� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverPort() const {			// Port ���������� �������
		return this->serverPort;
	}
	/// <summary> Get ����� IP ������� ���������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverRezervIP() const {		// IP ���������� ���������� �������
		return this->serverRezervIP;
	}
	/// <summary> Get ����� ����� ���������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverRezervPort() const {		// Port ���������� ���������� �������
		return this->serverRezervPort;
	}
}