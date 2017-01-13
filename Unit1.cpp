//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TForm1 *Form1;
FILE *fp,*fp2;
char str;
int x[12][84],v,z,maxv=12,zmustbe=84;
float y[12][12];
AnsiString fstr;
int i=0,j=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{v=z=0;
CGauge1->Visible=false;
if(OpenDialog1->Execute()){
        char *FileNameS= OpenDialog1->FileName.c_str();
        fp=fopen(FileNameS,"r");

        while(!feof(fp)) {
             fread(&str,sizeof(char),1,fp);
                if((str!=' ') && (str!='\n'))
                        {fstr+=str;}
                else {  if(fstr!="") {
                        x[v][z]=StrToInt(fstr);
                        fstr="";
                        z++;
                        if(z==zmustbe){
                                v++;
                                z=0;}
                        if(v==maxv)
                        break; }
                 }
        }
fclose(fp);
z=v=0;
Button2->Enabled=true;
i=0;
}
 }

//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{ Edit1->Text=IntToStr(x[v][z]);
z++;
        if(z==zmustbe){
                v++;
                z=0;}

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button2Click(TObject *Sender)
{
float s=0;
for(i=0;i<12;++i){
        for(j=0;j<12;++j){
                for(int e=0;e<84;++e)
                        s+=(x[i][e]-x[j][e])*(x[i][e]-x[j][e]);
                y[i][j]=sqrt(s/84);
                s=0;}}

i=0,j=0;
CGauge1->Visible=true;
CGauge1->Progress=0;
for(int en=0;en<100;++en){
CGauge1->AddProgress(1);
Sleep(10);}
Button3->Enabled=true;
ShowMessage("Вычисления произведены. Для сохранения результатов нажмите кнопку 'Save results'.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
Edit2->Text=FloatToStr(y[i][j]);
j++;
        if(j==zmustbe){
                i++;
                j=0;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{ AnsiString stry[12];
CGauge1->Visible=false;
if (SaveDialog1->Execute())
        {AnsiString FileNameR = SaveDialog1->FileName;
        for(int c=0;c<12;++c)
                { for(int c1=0;c1<12;c1++)
                        {//здесь я присваиваю стрстрай этот элемент массива ну их и записывай ладно точнее и разделяювсе комменты))
                        stry[c1]=FloatToStr(y[c][c1]);
                        }
                        //bugagashen'ka))
                //stoy!!
                RichEdit1->Lines->Add(stry[0]+"  "+stry[1]+"  "+stry[2]+"  "+stry[3]+"  "+stry[4]+"  "+stry[5]+"  "+stry[6]+"  "+stry[7]+"  "+stry[8]+"  "+stry[9]+"  "+stry[10]+"  "+stry[11]);
                for(int tt=0;tt<12;++tt)
                {stry[tt]="";}                }
        RichEdit1->Lines->SaveToFile(FileNameR);
        RichEdit1->Lines->Clear();
        ShowMessage("Результаты сохранены.");
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
ShowMessage("Данная программа предназначена для вычисления расстояний между строками матрицы 12 Х 84. Для открытия файла с исходной матрицей нажмите на кнопку 'Open file', для выполнения вычислений - на кнопку 'Start', для сохранения результатов вычислений в файл нажмите на кнопку 'Save results'. Результаты вычислений сохраняются в указанный файл в виде матрицы 12 Х 12. ");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
ShowMessage("Программу разработали мы)");        
}
//---------------------------------------------------------------------------

