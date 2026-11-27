// Server.cpp - Головний файл консольного сервера CORBA
#include <corba.h>
#include <iostream.h>
#include <conio.h>
#include "MyServer.h"
#include "MatrixServ_s.hh"

int main(int argc, char* const* argv)
{
    try
    {
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
        CORBA::BOA_var boa = orb->BOA_init(argc, argv);

        MatrixImpl myMatrixObject("MyMatrixObject");
        boa->obj_is_ready(&myMatrixObject);

        cout << "CORBA Server (MatrixModule::MatrixObj) запущено..." << endl;
        boa->impl_is_ready();
    }
    catch (const CORBA::Exception& e)
    {
        cerr << "Помилка CORBA: " << e << endl;
        return 1;
    }
    return 0;
}
