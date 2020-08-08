#include "C_MainFrame.h"

namespace TG
{
    MyFrame::MyFrame()
        : wxFrame(NULL, wxID_ANY, "Hello World")
    {   
        manager = std::make_shared<wxAuiManager>();

        // menu

        menuhelp = new wxMenu();
        menuhelp->Append(ID_MENU_HILFE, "Hilfe");
        menuhelp->Append(ID_MENU_UEBER, "?");

        mainmenu = new wxMenuBar(wxMB_DOCKABLE);
        mainmenu->Append(menuhelp, "Hilfe");

        SetMenuBar(mainmenu);

        // wxaui manager

        manager->SetManagedWindow(this);
        manager->Update();

        Bind(wxEVT_PAINT, &MyFrame::OnPaint, this);
    }

    MyFrame::~MyFrame()
    {
            manager->UnInit();
    }

    void MyFrame::OnClose(wxCommandEvent& event)
    {
        Close(true);
    }

    void MyFrame::OnAbout(wxCommandEvent& event)
    {
        wxMessageBox("TerraiGenerator V0.1", "OK", wxOK | wxICON_INFORMATION);
    }

    void MyFrame::OnHello(wxCommandEvent& event)
    {
        wxLogMessage("TG");
    }

    void MyFrame::OnPaint(wxPaintEvent& event) 
    { 
       wxPaintDC dc(this);
       PrepareDC(dc);

    }
}