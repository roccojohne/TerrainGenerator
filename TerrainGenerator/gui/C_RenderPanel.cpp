#include "C_RenderPanel.h"

namespace TG
{
    C_RenderPanel::C_RenderPanel(wxFrame &parent, int id, wxPoint &pos, wxSize &size)
       : wxPanel(&parent, id, pos, size) 
    {
    }

    C_RenderPanel::C_RenderPanel(wxFrame &parent)
        : wxPanel(&parent, -1, wxDefaultPosition, wxDefaultSize)
    {
    }

}