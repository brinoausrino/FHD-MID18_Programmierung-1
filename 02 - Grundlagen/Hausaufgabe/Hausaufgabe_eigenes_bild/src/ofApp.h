#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		string titleArtPiece = "ein sehr gutes Werk von mir";

		
};
