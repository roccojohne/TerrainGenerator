#pragma once

#include "../main.h"
#include <wx/sizer.h>
#include <wx/image.h>
#include <wx/aui/aui.h>



namespace TG
{
    class MyFrame : public wxFrame
    {
        public:
            MyFrame();
            ~MyFrame();
        private:
            C_RenderPanel* renderpanel = nullptr;
            std::shared_ptr<wxAuiManager> manager = nullptr;

            void OnHello(wxCommandEvent& event);
            void OnClose(wxCommandEvent& event);
            void OnAbout(wxCommandEvent& event);
            void OnPaint(wxPaintEvent& event);
            void OnMenu(wxCommandEvent& event);

            wxMenuBar* mainmenu = nullptr;
            wxMenu* menuhelp = nullptr;


            // id's
            enum
            {
                ID_Hello = 1,
                ID_MENU_HILFE = 1000,
                ID_MENU_UEBER,
            };
    };
}