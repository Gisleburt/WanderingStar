/**
 * Main App Class
 */

#pragma once

#include "Includes.h"

using namespace ws;

void WanderingStarApp::setup() {
	mCam.setup();
}

void WanderingStarApp::mouseDown( MouseEvent event ) {
}

void WanderingStarApp::update() {
}

void WanderingStarApp::draw() {
	// clear out the window with black
	gl::clear( Color( 0, 0, 1.0f ) ); 
}


