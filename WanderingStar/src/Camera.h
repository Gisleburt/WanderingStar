/**
 * Main App Class
 */

#pragma once

#include "Includes.h"

using namespace ci;

namespace ws {

	class Camera  {

		protected:
			CameraPersp mCam;
			Vec3f mEye;
			Vec3f mCenter;
			Vec3f mUp;

		public:
			void setup();
			void update();
			void draw();

	};

}
