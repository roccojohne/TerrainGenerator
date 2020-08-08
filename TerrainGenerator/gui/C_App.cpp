#include "C_App.h"

namespace TG
{
    
    bool MyApp::OnInit()
    {
        wxInitAllImageHandlers();
        MyFrame* frame = new MyFrame();
        frame->Show(true);
        return true;
    }

}