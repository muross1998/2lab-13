#include <vcl.h>
#pragma hdrstop

#include "ClientUnit.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    Caption = "ЛР13 - CORBA клієнт (Варіант 9: Матриця)";
    Label1->Caption = "Матриця 2x2 (a11, a12, a21, a22):";
    Label2->Caption = "Скаляр alpha:";
    Label3->Caption = "Визначник D:";
    Label4->Caption = "Сума * alpha:";

    Edit1->Text = "2";
    Edit2->Text = "1";
    Edit3->Text = "3";
    Edit4->Text = "4";
    Edit5->Text = "2,5";
    Edit6->ReadOnly = true;
    Edit7->ReadOnly = true;

    Button1->Caption = "Обчислити через CORBA";
}

MatrixModule::MatrixObj_ptr TForm1::Getmy(void)
{
    if (CORBA::is_nil(Fmy))
    {
        Fmy = MatrixModule::MatrixObj::_bind("MyMatrixObject");
    }
    return Fmy;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    try
    {
        float a11 = StrToFloat(Edit1->Text);
        float a12 = StrToFloat(Edit2->Text);
        float a21 = StrToFloat(Edit3->Text);
        float a22 = StrToFloat(Edit4->Text);
        float alpha = StrToFloat(Edit5->Text);

        float det = my->calcDet(a11, a12, a21, a22);
        float sum = my->calcScaledSum(a11, a12, a21, a22, alpha);

        Edit6->Text = FloatToStr(det);
        Edit7->Text = FloatToStr(sum);
    }
    catch (const CORBA::Exception& e)
    {
        Application->MessageBox("Помилка виклику віддаленого об'єкта CORBA! Перевірте запуск SmartAgent та Server.exe", "Помилка CORBA", MB_OK | MB_ICONERROR);
    }
}
