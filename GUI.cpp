//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "GUI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ADDDClick(TObject *Sender)
{
	String taskText =  TextInput->Text;
	ListBox->Items->Add(taskText);

    TextInput->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	int index = Item->Index;
    ListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------
