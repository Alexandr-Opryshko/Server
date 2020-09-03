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

#define directionConnectDef	0					// ���������� ����������� (0-99)
#define numberObjectDef		0					// ����� ������� (0-9999)
#define typePPCDef			0					// ��� ����������

#define TCP	6
#define UDP 17
#define typeProtocolDef	TCP
#define timeControlDef	210
#define timeControlMin	60
#define IPDef	0x7F000001
#define PortDef	10000
#define IP_Min	0x1000001

//################################## ���� ������ ��������� �������� ###################################################
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

//################################## ������ ����������� ������������ ##################################################
	public class Object : public BazaObject {
	public:

		const unsigned int Get_directionConnect() const;					// ���������� ����������� (0-99)
		const unsigned int Get_numberObject() const;						// ����� ������� (0-9999)
		const int Get_typePPC() const;										// ��� ����������
		const unsigned long Get_ipPPC() const;								// IP �������
		const unsigned int Get_portPPC() const;								// Port �������

		unsigned int Set_directionConnect(unsigned int directionConnect);	// ���������� ����������� (0-99)
		unsigned int Set_numberObject(unsigned int numberObject);			// ����� ������� (0-9999)
		int Set_typePPC(int typePPC);										// ��� ����������
		unsigned long Set_ipPPC(unsigned long ipPPC);						// IP �������
		unsigned int Set_portPPC(unsigned int portPPC);						// Port �������

		Object();
		~Object();

	private:
		unsigned int directionConnect;								// ���������� ����������� (0-99)
		unsigned int numberObject;									// ����� ������� (0-9999)
		int typePPC;												// ��� ����������
		unsigned long ipPPC;										// IP �������
		unsigned int portPPC;										// Port �������
	};

//################################## ������ ############ ��������� ���������� ������ ##################################
	class SettingsServer {
	public:
		const int Get_typeProtocol() const;							// ��� ��������� (TCP/UDP)
		const int Get_timeControl() const;							// ����� �������� ������� �����(���)
		const unsigned long Get_localHostIP() const;				// ���� IP
		const unsigned int Get_localHostPort() const;				// ���� Port

		int Set_typeProtocol(int typeProtocol);						// ��� ��������� (TCP/UDP)
		int Set_timeControl(int timeControl);						// ����� �������� ������� �����(���)
		unsigned long Set_localHostIP(unsigned long localHostIP);	// ���� IP
		unsigned int Set_localHostPort(unsigned int localHostPort);	// ���� Port

		SettingsServer(
			int typeProtocol,
			int timeControl,
			unsigned long localHostIP,	
			unsigned int localHostPort
		);
		SettingsServer();
		~SettingsServer();

	private:
		int typeProtocol;											// ��� ��������� (TCP/UDP)
		int timeControl;											// ����� �������� ������� �����(���)
		unsigned long localHostIP;									// ���� IP
		unsigned int localHostPort;									// ���� Port
	};

//################################## ������ ############ ��������� ���������� ������ ##################################
	class SettingsIPClient : public SettingsServer {
	public:
		const unsigned long Get_serverIP() const;					// IP ���������� �������
		const unsigned int Get_serverPort() const;				// Port ���������� �������
		const unsigned long Get_serverRezervIP() const;		// IP ���������� ���������� �������
		const unsigned int Get_serverRezervPort() const;	// Port ���������� ���������� �������

		unsigned long Set_serverIP(unsigned long serverIP);					// IP ���������� �������
		unsigned int Set_serverPort(unsigned int serverPort);				// Port ���������� �������
		unsigned long Set_serverRezervIP(unsigned long serverRezervIP);		// IP ���������� ���������� �������
		unsigned int Set_serverRezervPort(unsigned int serverRezervPort);	// Port ���������� ���������� �������
		SettingsIPClient(
			int typeProtocol,							// ��� ��������� (TCP/UDP)
			int timeControl,							// ����� �������� ������� �����(���)
			unsigned long localHostIP,					// ���� IP
			unsigned int localHostPort,					// ���� Port
			unsigned long serverIP,						// IP ���������� �������
			unsigned int serverPort,					// Port ���������� �������
			unsigned long serverRezervIP,				// IP ���������� ���������� �������
			unsigned int serverRezervPort				// Port ���������� ���������� �������
		);
		SettingsIPClient();
		~SettingsIPClient();

	private:
		unsigned long serverIP;							// IP ���������� �������
		unsigned int serverPort;						// Port ���������� �������
		unsigned long serverRezervIP;					// IP ���������� ���������� �������
		unsigned int serverRezervPort;					// Port ���������� ���������� �������
	};

}