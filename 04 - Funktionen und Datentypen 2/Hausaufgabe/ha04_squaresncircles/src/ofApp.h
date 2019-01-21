#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void randomCircle(int x, int y);
		void randomSquare(int x, int y);
		void randomTriangle(int x, int y);

		vector<ofVec3f> v_circles;
		vector<ofVec4f> v_squares;
		vector<vector<int>> v_triangles;
		vector<char> v_type;
		
};
