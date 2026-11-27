object Form1: TForm1
  Left = 240
  Top = 160
  Width = 420
  Height = 290
  Caption = 'LR13 CORBA Client'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 160
    Height = 13
    Caption = 'Matrix 2x2:'
  end
  object Label2: TLabel
    Left = 224
    Top = 16
    Width = 80
    Height = 13
    Caption = 'Alpha:'
  end
  object Label3: TLabel
    Left = 24
    Top = 168
    Width = 80
    Height = 13
    Caption = 'Det:'
  end
  object Label4: TLabel
    Left = 224
    Top = 168
    Width = 80
    Height = 13
    Caption = 'Scaled Sum:'
  end
  object Edit1: TEdit
    Left = 24
    Top = 36
    Width = 73
    Height = 21
    TabOrder = 0
    Text = '2'
  end
  object Edit2: TEdit
    Left = 108
    Top = 36
    Width = 73
    Height = 21
    TabOrder = 1
    Text = '1'
  end
  object Edit3: TEdit
    Left = 24
    Top = 66
    Width = 73
    Height = 21
    TabOrder = 2
    Text = '3'
  end
  object Edit4: TEdit
    Left = 108
    Top = 66
    Width = 73
    Height = 21
    TabOrder = 3
    Text = '4'
  end
  object Edit5: TEdit
    Left = 224
    Top = 36
    Width = 145
    Height = 21
    TabOrder = 4
    Text = '2,5'
  end
  object Button1: TButton
    Left = 24
    Top = 112
    Width = 345
    Height = 33
    Caption = 'Calculate via CORBA'
    TabOrder = 5
    OnClick = Button1Click
  end
  object Edit6: TEdit
    Left = 24
    Top = 188
    Width = 157
    Height = 21
    ReadOnly = True
    TabOrder = 6
  end
  object Edit7: TEdit
    Left = 224
    Top = 188
    Width = 145
    Height = 21
    ReadOnly = True
    TabOrder = 7
  end
end
