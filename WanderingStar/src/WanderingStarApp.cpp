#include "Includes.h"


void WanderingStarApp::setup() {
	mCam.setPerspective( 60.0f, getWindowAspectRatio(), 5.0f, 3000.0f );
}

void WanderingStarApp::mouseDown( MouseEvent event ) {
}

void WanderingStarApp::update() {
}

void WanderingStarApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 1.0f ) ); 
}


