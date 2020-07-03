#include"MyClass.h"



const int Get_typeProtocol() const;						// тип протокола (TCP/UDP)
const int Get_timeControl() const;						// время проверки наличия связи(сек)
const unsigned long Get_localHostIP() const;			// Свой IP
const unsigned int Get_localHostPort() const;			// Свой Port

const unsigned long Set_serverIP() const;					// IP удаленного сервера
const unsigned int Set_serverPort() const;				// Port удаленного сервера
const unsigned long Set_serverRezervIP() const;		// IP резервного удаленного сервера
const unsigned int Set_serverRezervPort() const;	// Port резервного удаленного сервера