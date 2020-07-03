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
		unsigned int directionConnect;			// ���������� ����������� (0-99)
		unsigned int numberObject;				// ����� ������� (0-9999)
		int typePPC;							// ��� ����������
		unsigned long ipPPC;					// IP �������
		int portPPC;							// Port �������
		String d;
	};
//################################## ������ ############ ��������� ���������� ������ ##################################
	class SettingsServer {
	public:
		SettingsServer();
		~SettingsServer();

	private:
		int typeProtocol;
		unsigned long localHostIP;
		int localHostPort;
	};
//################################## ������ ############ ��������� ���������� ������ ##################################
	class SettingsClient {
	public:
		SettingsClient();
		~SettingsClient();

	private:
		int typeProtocol;								// ��� ��������� (TCP/UDP)
		int timeControl;								// ����� �������� ������� �����
		unsigned long serverIP;							// IP ���������� �������
		int serverPort;									// Port ���������� �������
		unsigned long serverRezervIP;					// IP ���������� ���������� �������
		int serverRezervPort;							// Port ���������� ���������� �������
		unsigned long localHostIP;						// ���� IP
		int localHostPort;								// ���� Port

	};
	
}