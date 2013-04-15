/**
 * Main App Class
 */

#pragma once

#include "Includes.h"

using namespace ci;
using namespace ci::app;
using namespace std;

namespace ws {
	class WanderingStarApp : public AppBasic {

		protected:
			Camera mCam;

		public:
			void setup();
			void mouseDown( MouseEvent event );	
			void update();
			void draw();
	};
}

