#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0); //blau
    ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// kreis oben links
	ofVec2f circlePosition = ofVec2f(50,50);

	float t = ofGetElapsedTimef();
	int x = (sin(t) * 40);

	if (mouseX < 500)
		while (circlePosition.x < 1000) {
			while (circlePosition.y < 1000) {
				ofDrawCircle(circlePosition.x, circlePosition.y, x);
				circlePosition.y = circlePosition.y + 80;
			}

			circlePosition.x += 80;
			circlePosition.y = 50;
		}

	}

	else {

		while (circlePosition.x < 1000) {
			while (circlePosition.y < 1000) {
				ofSetColor(226,40,27);
				ofDrawCircle(circlePosition.x, circlePosition.y, x);
				circlePosition.y = circlePosition.y + 80;
			}

			circlePosition.x += 80;
			circlePosition.y = 50;
		}
		

		
	}


	


	


	//rahmen
	ofSetColor(255); //schwarz
	ofDrawRectangle(0,0,1000,20);
	ofDrawRectangle(0,0,20,1000);
	ofDrawRectangle(0,980,1000,20);
	ofDrawRectangle(980,0,30,1000);

	ofSetColor(255);
	ofDrawBitmapString(titleArtPiece, 20, 985);
}

void ofApp::keyPressed(int key){
	if (key == 's'){
		ofSaveScreen("capture_" + ofGetTimestampString() + ".png");
	}
}
