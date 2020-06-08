#ifndef REGISTER_HEADER
#define REGISTER_HEADER

#include <wx\wx.h>
#include "gxButton.h"

class RegisterNow :public wxDialog
{
public:
	RegisterNow(const wxString& title);
	//Event function for buttons
	void OnButtonSubmit(wxCommandEvent& event);
	void OnButtonPurchase(wxCommandEvent& event);
	void OnButtonCancel(wxCommandEvent& event);
	void SetAllWithValidation(bool bValidate);

	bool mbIsRegistered;
	wxPanel* mPanelAll;

	wxStaticText* mStaticText1;
	wxStaticText* mStaticText2;
	wxTextCtrl* mTextCtrl;
	MyWXRoundEdgeButton* mBtnSubmit;
	MyWXRoundEdgeButton* mBtnPurchase;
	MyWXRoundEdgeButton* mBtnCancel;
	wxBoxSizer* mSizerVAll;
	wxBoxSizer* mSizerHButtons;
};


enum eBTN_ID20
{
	//520 - 539
	ID_REGISTER_BTN_SUBMIT = 520,
	ID_REGISTER_BTN_PURCHASE,
	ID_REGISTER_BTN_CANCEL,
};

#endif