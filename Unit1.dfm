object Form1: TForm1
  Left = 262
  Top = 177
  BorderStyle = bsSingle
  Caption = 'Program'
  ClientHeight = 142
  ClientWidth = 302
  Color = 4673588
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object CGauge1: TCGauge
    Left = 48
    Top = 80
    Width = 193
    Height = 49
    Color = clWhite
    ForeColor = 9069410
    BackColor = 4194304
    ParentColor = False
    Visible = False
  end
  object Button1: TButton
    Left = 16
    Top = 8
    Width = 75
    Height = 25
    Hint = #1054#1090#1082#1088#1099#1090#1100' '#1092#1072#1081#1083'  '#1089' '#1080#1089#1093#1086#1076#1085#1086#1081' '#1084#1072#1090#1088#1080#1094#1077#1081
    Caption = 'Open file'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 112
    Top = 24
    Width = 75
    Height = 41
    Hint = #1053#1072#1095#1072#1090#1100' '#1074#1099#1095#1080#1089#1083#1077#1085#1080#1077' '#1088#1072#1089#1089#1090#1086#1103#1085#1080#1081' '#1084#1077#1078#1076#1091' '#1089#1090#1088#1086#1082#1072#1084#1080
    Caption = 'Start'
    Enabled = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 208
    Top = 8
    Width = 75
    Height = 25
    Hint = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1088#1077#1079#1091#1083#1100#1090#1072#1090#1099' '#1074#1099#1095#1080#1089#1083#1077#1085#1080#1081' '#1074' '#1092#1072#1081#1083
    Caption = 'Save results'
    Enabled = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 8
    Top = 48
    Width = 89
    Height = 21
    TabOrder = 3
    Text = 'Edit1'
    Visible = False
  end
  object Button4: TButton
    Left = 216
    Top = 40
    Width = 75
    Height = 25
    Caption = 'Button4'
    TabOrder = 4
    Visible = False
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 216
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Button5'
    TabOrder = 5
    Visible = False
    OnClick = Button5Click
  end
  object Edit2: TEdit
    Left = 0
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 6
    Text = 'Edit2'
    Visible = False
  end
  object RichEdit1: TMemo
    Left = 40
    Top = 184
    Width = 625
    Height = 497
    Lines.Strings = (
      '')
    TabOrder = 7
    Visible = False
  end
  object OpenDialog1: TOpenDialog
    Filter = 'text|*.txt|all|*.*'
    Left = 8
    Top = 80
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    Filter = 'text|*.txt|all|*.*'
    Left = 8
    Top = 96
  end
  object MainMenu1: TMainMenu
    Left = 256
    Top = 88
    object N1: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N2: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N2Click
      end
      object N3: TMenuItem
        Caption = #1056#1072#1079#1088#1072#1073#1086#1090#1095#1080#1082
        OnClick = N3Click
      end
    end
  end
end
