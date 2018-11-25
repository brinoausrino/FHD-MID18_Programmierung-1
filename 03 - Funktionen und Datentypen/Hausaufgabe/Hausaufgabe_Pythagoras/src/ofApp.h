#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		float hypothenuse(float x, float y);
		float kathete(float k, float h);

};
