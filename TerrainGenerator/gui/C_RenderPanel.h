#pragma once

#include "../main.h"

namespace TG
{
    class C_RenderPanel : public wxPanel
    {
        public:
            C_RenderPanel(wxFrame &parent, int id, wxPoint &pos, wxSize &size);
            C_RenderPanel(wxFrame &panel);

    };

}