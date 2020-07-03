#include"MyClass.h"

namespace Form {

	//###################################################################

	/// <summary> Get метод типа протокола связи </summary>
	/// <returns></returns>
	const int SettingsServer::Get_typeProtocol() const {					// тип протокола (TCP/UDP)
		return this->typeProtocol;
	}
	/// <summary> Get метод времени ожидания проверки наличия связи </summary>
	/// <returns></returns>
	const int SettingsServer::Get_timeControl() const {						// время проверки наличия связи(сек)
		return this->timeControl;
	}
	/// <summary> Get метод своего IP адресса </summary>
	/// <returns></returns>
	const unsigned long SettingsServer::Get_localHostIP() const {			// Свой IP
		return this->localHostIP;
	}
	/// <summary> Get метод своего порта </summary>
	/// <returns></returns>
	const unsigned int SettingsServer::Get_localHostPort() const {			// Свой Port
		return this->localHostPort;
	}

	//#########################################################

	/// <summary> Get метод IP адресса удаленного сервера </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverIP() const {			// IP удаленного сервера
		return this->serverIP;
	}
	/// <summary> Get метод открытого Порта удаленного сервера </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverPort() const {			// Port удаленного сервера
		return this->serverPort;
	}
	/// <summary> Get метод IP адресса резервного удаленного сервера </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverRezervIP() const {		// IP резервного удаленного сервера
		return this->serverRezervIP;
	}
	/// <summary> Get метод Порта резервного удаленного сервера </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverRezervPort() const {		// Port резервного удаленного сервера
		return this->serverRezervPort;
	}
}