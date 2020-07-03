#include"MyClass.h"

namespace Form {

//################################################################ Сервер ##############################################
	/// <summary> Set метод для установки протокола </summary>
	/// <param name="typeProtocol"></param>
	/// <returns></returns>
	int SettingsServer::Set_typeProtocol(int typeProtocol) {						// тип протокола (TCP/UDP)
		if (typeProtocol != TCP && typeProtocol != UDP) 
			typeProtocol = typeProtocolDef;
		return this->typeProtocol = typeProtocol;
	}
	/// <summary> Set метод для установки времени ожидания данных для контроля связи </summary>
	/// <param name="timeControl"></param>
	/// <returns></returns>
	int SettingsServer::Set_timeControl(int timeControl) {							// время проверки наличия связи(сек)
		if (timeControl < 60) timeControl = timeControlMin;							// установим минимальное значение
		return this->timeControl = timeControl;
	}
	/// <summary> Set метод для установки Своего IP </summary>
	/// <param name="localHostIP"></param>
	/// <returns></returns>
	unsigned long SettingsServer::Set_localHostIP(unsigned long localHostIP) {		// Свой IP
		if (localHostIP < IP_Min) localHostIP = IPDef;
		return this->localHostIP = localHostIP;
	}
	unsigned int SettingsServer::Set_localHostPort(unsigned int localHostPort) {	// свой Port
		return this->localHostPort = localHostPort;
	}

//################################################################ IP Клиент ###########################################

	unsigned long SettingsIPClient::Set_serverIP(unsigned long serverIP) {					// IP удаленного сервера
		if (serverIP < IP_Min) serverIP = IPDef;
		return this->serverIP = serverIP;
	}
	unsigned int SettingsIPClient::Set_serverPort(unsigned int serverPort) {				// Port удаленного сервера
		return this->serverPort = serverPort;
	}
	unsigned long SettingsIPClient::Set_serverRezervIP(unsigned long serverRezervIP) {		// IP резервного удаленного сервера
		if (serverRezervIP < IP_Min) serverRezervIP = IPDef;
		return this->serverRezervIP = serverRezervIP;
	}
	unsigned int SettingsIPClient::Set_serverRezervPort(unsigned int serverRezervPort) {	// Port резервного удаленного сервера
		return this->serverRezervPort = serverRezervPort;
	}
}