#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		float hypothenuse(float a, float b);

		float Kathete(float c, float b);

};
