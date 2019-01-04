#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		float hypothenuse(float ankathete, float gegenkathete);

		float Kathete(float Ankathete, float Hypothenuse);


};


