#pragma once

#include "../main.h"
#include "C_MainFrame.h"

namespace TG
{
	class MyApp : public wxApp
	{
		private:
            wxTimer *renderTimer = nullptr;

		public:
			virtual bool OnInit();

	};
 }