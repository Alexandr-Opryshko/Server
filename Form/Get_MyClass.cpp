#include"MyClass.h"



const int Get_typeProtocol() const;						// ��� ��������� (TCP/UDP)
const int Get_timeControl() const;						// ����� �������� ������� �����(���)
const unsigned long Get_localHostIP() const;			// ���� IP
const unsigned int Get_localHostPort() const;			// ���� Port

const unsigned long Set_serverIP() const;					// IP ���������� �������
const unsigned int Set_serverPort() const;				// Port ���������� �������
const unsigned long Set_serverRezervIP() const;		// IP ���������� ���������� �������
const unsigned int Set_serverRezervPort() const;	// Port ���������� ���������� �������