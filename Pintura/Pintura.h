#pragma once  //______________________________________ Pintura.h  
#include "Resource.h"
class Pintura: public Win::Dialog
{
public:
	Pintura()
	{
	}
	~Pintura()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btConvertir;
	Win::Textbox tbxLitros;
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxGalones;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(11.53583);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.85208);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Pintura";
		btConvertir.CreateX(NULL, L"Convertir", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.28625, 1.05833, 3.25438, 0.60854, hWnd, 1000);
		tbxLitros.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 8.09625, 1.05833, 3.25438, 0.60854, hWnd, 1001);
		lb1.CreateX(NULL, L"Galones", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.87313, 0.18521, 2.51354, 0.60854, hWnd, 1002);
		lb2.CreateX(NULL, L"Litros", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 8.22854, 0.18521, 2.93688, 0.60854, hWnd, 1003);
		tbxGalones.CreateX(WS_EX_CLIENTEDGE, L"Galones", WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.82021, 1.05833, 2.75167, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btConvertir.Font = fontArial009A;
		tbxLitros.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxGalones.Font = fontArial009A;
	}
	//_________________________________________________
	void btConvertir_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvertir.IsEvent(e, BN_CLICKED)) {btConvertir_Click(e); return true;}
		return false;
	}
};
