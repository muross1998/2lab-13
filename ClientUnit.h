#ifndef ClientUnitH
#define ClientUnitH

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "MatrixServ_c.hh"

class TForm1 : public TForm
{
__published:
    TEdit *Edit1;
    TEdit *Edit2;
    TEdit *Edit3;
    TEdit *Edit4;
    TEdit *Edit5;
    TEdit *Edit6;
    TEdit *Edit7;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TButton *Button1;

    void __fastcall Button1Click(TObject *Sender);

private:
    MatrixModule::MatrixObj_var Fmy;
    MatrixModule::MatrixObj_ptr Getmy(void);

public:
    __fastcall TForm1(TComponent* Owner);
    __property MatrixModule::MatrixObj_ptr my = { read=Getmy };
};

extern PACKAGE TForm1 *Form1;
#endif
