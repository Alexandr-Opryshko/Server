#include"MyClass.h"

namespace Form {
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_directionConnect() const {	// ���������� ����������� (0-99)
		return this->directionConnect;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_numberObject() const {			// ����� ������� (0-9999)
		return this->numberObject;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const int Object::Get_typePPC() const {										// ��� ����������
		return this->typePPC;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned long Object::Get_ipPPC() const {						// IP �������
		return this->ipPPC;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_portPPC() const {						// Port �������
		return this->portPPC;
	}

	//###################################################################

	/// <summary> Get ����� ���� ��������� ����� </summary>
	/// <returns></returns>
	const int SettingsServer::Get_typeProtocol() const {						// ��� ��������� (TCP/UDP)
		return this->typeProtocol;
	}
	/// <summary> Get ����� ������� �������� �������� ������� ����� </summary>
	/// <returns></returns>
	const int SettingsServer::Get_timeControl() const {							// ����� �������� ������� �����(���)
		return this->timeControl;
	}
	/// <summary> Get ����� ������ IP ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsServer::Get_localHostIP() const {				// ���� IP
		return this->localHostIP;
	}
	/// <summary> Get ����� ������ ����� </summary>
	/// <returns></returns>
	const unsigned int SettingsServer::Get_localHostPort() const {				// ���� Port
		return this->localHostPort;
	}

	//#########################################################

	/// <summary> Get ����� IP ������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverIP() const {				// IP ���������� �������
		return this->serverIP;
	}
	/// <summary> Get ����� ��������� ����� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverPort() const {				// Port ���������� �������
		return this->serverPort;
	}
	/// <summary> Get ����� IP ������� ���������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverRezervIP() const {			// IP ���������� ���������� �������
		return this->serverRezervIP;
	}
	/// <summary> Get ����� ����� ���������� ���������� ������� </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverRezervPort() const {			// Port ���������� ���������� �������
		return this->serverRezervPort;
	}
}