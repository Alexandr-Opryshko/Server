#pragma once
#include<Windows.h>
#include<string>

namespace Form {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

#define TCP	6
#define UDP 17
#define typeProtocolDef	TCP
#define timeControlDef	210
#define timeControlMin	60
#define IPDef	0x7F000001
#define PortDef	10000
#define IP_Min	0x1000001

//#####################################################################################################################
	public class Object {
	public:
		Object();
		~Object();

	private:
		unsigned int directionConnect;					// Напрвление подключения (0-99)
		unsigned int numberObject;						// номер объекта (0-9999)
		int typePPC;									// тип устройства
		unsigned long ipPPC;							// IP прибора
		unsigned int portPPC;							// Port прибора
	};

//################################## Сервер ############ Настройки соединений пульта ##################################
	class SettingsServer {
	public:
		const int Get_typeProtocol() const;						// тип протокола (TCP/UDP)
		const int Get_timeControl() const;						// время проверки наличия связи(сек)
		const unsigned long Get_localHostIP() const;	// Свой IP
		const unsigned int Get_localHostPort() const;					// свой Port

		int Set_typeProtocol(int typeProtocol);						// тип протокола (TCP/UDP)
		int Set_timeControl(int timeControl);						// время проверки наличия связи(сек)
		unsigned long Set_localHostIP(unsigned long localHostIP);	// Свой IP
		unsigned int Set_localHostPort(unsigned int localHostPort);					// свой Port

		SettingsServer(
			int typeProtocol,
			int timeControl,
			unsigned long localHostIP,	
			unsigned int localHostPort
		);
		SettingsServer();
		~SettingsServer();

	private:
		int typeProtocol;								// тип протокола (TCP/UDP)
		int timeControl;								// время проверки наличия связи(сек)
		unsigned long localHostIP;						// Свой IP
		unsigned int localHostPort;						// свой Port
	};
//################################## Клиент ############ Настройки соединений пульта ##################################
	class SettingsIPClient : public SettingsServer {
	public:
		const unsigned long Set_serverIP() const;					// IP удаленного сервера
		const unsigned int Set_serverPort() const;				// Port удаленного сервера
		const unsigned long Set_serverRezervIP() const;		// IP резервного удаленного сервера
		const unsigned int Set_serverRezervPort() const;	// Port резервного удаленного сервера

		unsigned long Set_serverIP(unsigned long serverIP);					// IP удаленного сервера
		unsigned int Set_serverPort(unsigned int serverPort);				// Port удаленного сервера
		unsigned long Set_serverRezervIP(unsigned long serverRezervIP);		// IP резервного удаленного сервера
		unsigned int Set_serverRezervPort(unsigned int serverRezervPort);	// Port резервного удаленного сервера
		SettingsIPClient(
			int typeProtocol,							// тип протокола (TCP/UDP)
			int timeControl,							// время проверки наличия связи(сек)
			unsigned long localHostIP,					// Свой IP
			unsigned int localHostPort,					// свой Port
			unsigned long serverIP,						// IP удаленного сервера
			unsigned int serverPort,					// Port удаленного сервера
			unsigned long serverRezervIP,				// IP резервного удаленного сервера
			unsigned int serverRezervPort				// Port резервного удаленного сервера
		);
		SettingsIPClient();
		~SettingsIPClient();

	private:
		unsigned long serverIP;							// IP удаленного сервера
		unsigned int serverPort;						// Port удаленного сервера
		unsigned long serverRezervIP;					// IP резервного удаленного сервера
		unsigned int serverRezervPort;					// Port резервного удаленного сервера
	};
}