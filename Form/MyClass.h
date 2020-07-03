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

#define directionConnectDef	0					// Ќапрвление подключени€ (0-99)
#define numberObjectDef		0					// номер объекта (0-9999)
#define typePPCDef			0					// тип устройства

#define TCP	6
#define UDP 17
#define typeProtocolDef	TCP
#define timeControlDef	210
#define timeControlMin	60
#define IPDef	0x7F000001
#define PortDef	10000
#define IP_Min	0x1000001

//################################## Ѕаза данных созданных объектов ###################################################
	public class BazaObject {
	public:
		BazaObject(int column, int size);
		BazaObject();
		~BazaObject();

	private:
		int column=0;
		int size=0;
		int **arrayBazaObject;
	};

//################################## ƒанные объектового оборудовани€ ##################################################
	public class Object : public BazaObject {
	public:
		Object();
		~Object();

	private:
		unsigned int directionConnect;					// Ќапрвление подключени€ (0-99)
		unsigned int numberObject;						// номер объекта (0-9999)
		int typePPC;									// тип устройства
		unsigned long ipPPC;							// IP прибора
		unsigned int portPPC;							// Port прибора
	};

//################################## —ервер ############ Ќастройки соединений пульта ##################################
	class SettingsServer {
	public:
		const int Get_typeProtocol() const;							// тип протокола (TCP/UDP)
		const int Get_timeControl() const;							// врем€ проверки наличи€ св€зи(сек)
		const unsigned long Get_localHostIP() const;				// —вой IP
		const unsigned int Get_localHostPort() const;				// свой Port

		int Set_typeProtocol(int typeProtocol);						// тип протокола (TCP/UDP)
		int Set_timeControl(int timeControl);						// врем€ проверки наличи€ св€зи(сек)
		unsigned long Set_localHostIP(unsigned long localHostIP);	// —вой IP
		unsigned int Set_localHostPort(unsigned int localHostPort);	// свой Port

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
		int timeControl;								// врем€ проверки наличи€ св€зи(сек)
		unsigned long localHostIP;						// —вой IP
		unsigned int localHostPort;						// свой Port
	};

//##################################  лиент ############ Ќастройки соединений пульта ##################################
	class SettingsIPClient : public SettingsServer {
	public:
		const unsigned long Get_serverIP() const;					// IP удаленного сервера
		const unsigned int Get_serverPort() const;				// Port удаленного сервера
		const unsigned long Get_serverRezervIP() const;		// IP резервного удаленного сервера
		const unsigned int Get_serverRezervPort() const;	// Port резервного удаленного сервера

		unsigned long Set_serverIP(unsigned long serverIP);					// IP удаленного сервера
		unsigned int Set_serverPort(unsigned int serverPort);				// Port удаленного сервера
		unsigned long Set_serverRezervIP(unsigned long serverRezervIP);		// IP резервного удаленного сервера
		unsigned int Set_serverRezervPort(unsigned int serverRezervPort);	// Port резервного удаленного сервера
		SettingsIPClient(
			int typeProtocol,							// тип протокола (TCP/UDP)
			int timeControl,							// врем€ проверки наличи€ св€зи(сек)
			unsigned long localHostIP,					// —вой IP
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