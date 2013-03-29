/**
 * Main App Class
 */

#pragma once

#include "Includes.h"

void ws::Camera::setup() {

	mCam.setPerspective( 60.0f, getWindowAspectRatio(), 5.0f, 3000.0f );
	mEye    = Vec3f( 0.0f, 0.0f, 500.0f );
	mCenter = Vec3f::zero();
	mUp     = Vec3f::yAxis();
	mCam.lookAt( mEye, mCenter, mUp );
	cinder::gl::setMatrices( mCam );

}