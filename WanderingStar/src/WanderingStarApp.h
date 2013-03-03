#include "Includes.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class WanderingStarApp : public AppBasic {

	protected:
		CameraPersp mCam;

	public:
		void setup();
		void mouseDown( MouseEvent event );	
		void update();
		void draw();
};

CINDER_APP_BASIC( WanderingStarApp, RendererGl )