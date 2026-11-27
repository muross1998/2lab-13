#include <vcl.h>
#include <corba.h>
#pragma hdrstop

USEFORM("ClientUnit.cpp", Form1);

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        CORBA::ORB_var orb = CORBA::ORB_init(__argc, __argv);
        CORBA::BOA_var boa = orb->BOA_init(__argc, __argv);

        Application->Initialize();
        Application->CreateForm(__classid(TForm1), &Form1);
        Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
