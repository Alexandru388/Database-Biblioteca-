//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label6;
	TLabel *Label7;
	TTimer *Timer1;
	TPageControl *PageControl1;
	TTabSheet *AUTENTIFICARE;
	TTabSheet *CITITOR;
	TTabSheet *IMPRUMUT;
	TTabSheet *CARTI;
	TPanel *Panel4;
	TLabel *Label8;
	TEdit *Edit1;
	TLabel *Label9;
	TEdit *Edit2;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TImage *Image1;
	TLabel *Label1;
	TPanel *Panel5;
	TPanel *Panel6;
	TPageControl *PageControl2;
	TTabSheet *INREGISTREAZA;
	TTabSheet *INOIESTE;
	TSpeedButton *SpeedButton6;
	TSpeedButton *SpeedButton5;
	TLabel *Label14;
	TLabel *Label12;
	TSpeedButton *SpeedButton4;
	TEdit *Edit4;
	TLabel *Label11;
	TLabel *Label10;
	TSpeedButton *SpeedButton3;
	TEdit *Edit3;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TLabel *Label5;
	TLabel *Label13;
	TSpeedButton *SpeedButton9;
	TEdit *Edit5;
	TLabel *Label15;
	TLabel *Label16;
	TSpeedButton *SpeedButton10;
	TEdit *Edit6;
	TLabel *Label20;
	TLabel *Label21;
	TEdit *Edit9;
	TLabel *Label22;
	TEdit *Edit10;
	TDBGrid *DBGrid1;
	TPanel *Panel7;
	TPanel *Panel8;
	TDBGrid *DBGrid2;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TGroupBox *GroupBox1;
	TSpeedButton *SpeedButton13;
	TCheckBox *CheckBox2;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit16;
	TEdit *Edit17;
	TEdit *Edit18;
	TPanel *Panel9;
	TPanel *Panel10;
	TSpeedButton *SpeedButton14;
	TSpeedButton *SpeedButton15;
	TDBGrid *DBGrid3;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TDateTimePicker *DateTimePicker5;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton12Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton15Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
