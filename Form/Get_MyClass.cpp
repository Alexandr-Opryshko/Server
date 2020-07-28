#include"MyClass.h"

namespace Form {
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_directionConnect() const {	// Напрвление подключения (0-99)
		return this->directionConnect;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_numberObject() const {			// номер объекта (0-9999)
		return this->numberObject;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const int Object::Get_typePPC() const {										// тип устройства
		return this->typePPC;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned long Object::Get_ipPPC() const {						// IP прибора
		return this->ipPPC;
	}
	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>
	const unsigned int Object::Get_portPPC() const {						// Port прибора
		return this->portPPC;
	}

	//###################################################################

	/// <summary> Get метод типа протокола связи </summary>
	/// <returns></returns>
	const int SettingsServer::Get_typeProtocol() const {						// тип протокола (TCP/UDP)
		return this->typeProtocol;
	}
	/// <summary> Get метод времени ожидания проверки наличия связи </summary>
	/// <returns></returns>
	const int SettingsServer::Get_timeControl() const {							// время проверки наличия связи(сек)
		return this->timeControl;
	}
	/// <summary> Get метод своего IP адресса </summary>
	/// <returns></returns>
	const unsigned long SettingsServer::Get_localHostIP() const {				// Свой IP
		return this->localHostIP;
	}
	/// <summary> Get метод своего порта </summary>
	/// <returns></returns>
	const unsigned int SettingsServer::Get_localHostPort() const {				// Свой Port
		return this->localHostPort;
	}

	//#########################################################

	/// <summary> Get метод IP адресса удаленного сервера </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverIP() const {				// IP удаленного сервера
		return this->serverIP;
	}
	/// <summary> Get метод открытого Порта удаленного сервера </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverPort() const {				// Port удаленного сервера
		return this->serverPort;
	}
	/// <summary> Get метод IP адресса резервного удаленного сервера </summary>
	/// <returns></returns>
	const unsigned long SettingsIPClient::Get_serverRezervIP() const {			// IP резервного удаленного сервера
		return this->serverRezervIP;
	}
	/// <summary> Get метод Порта резервного удаленного сервера </summary>
	/// <returns></returns>
	const unsigned int SettingsIPClient::Get_serverRezervPort() const {			// Port резервного удаленного сервера
		return this->serverRezervPort;
	}
}