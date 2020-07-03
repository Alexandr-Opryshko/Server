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

	public ref class Object : public System::Windows::Forms::Form {
	public:
		Object();
		~Object();

	private:
		unsigned int directionConnect;			// Напрвление подключения (0-99)
		unsigned int numberObject;				// номер объекта (0-9999)
		int typePPC;							// тип устройства
		unsigned long ipPPC;					// IP прибора
		int portPPC;							// Port прибора
		String d;
	};
//################################## Сервер ############ Настройки соединений пульта ##################################
	class SettingsServer {
	public:
		SettingsServer();
		~SettingsServer();

	private:
		int typeProtocol;
		unsigned long localHostIP;
		int localHostPort;
	};
//################################## Клиент ############ Настройки соединений пульта ##################################
	class SettingsClient {
	public:
		SettingsClient();
		~SettingsClient();

	private:
		int typeProtocol;								// тип протокола (TCP/UDP)
		int timeControl;								// время проверки наличия связи
		unsigned long serverIP;							// IP удаленного сервера
		int serverPort;									// Port удаленного сервера
		unsigned long serverRezervIP;					// IP резервного удаленного сервера
		int serverRezervPort;							// Port резервного удаленного сервера
		unsigned long localHostIP;						// Свой IP
		int localHostPort;								// свой Port

	};
	
}