#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0); //schwarz
    ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float timeconstant = sin(ofGetElapsedTimef()); //Wert zwischen -1 und 1

	// kreis oben links
	ofVec2f circlePosition = ofVec2f(50,50);
	ofVec2f mouse = ofVec2f(mouseX, mouseY);
	int circleRadius = 30;

	while (circlePosition.x < 1000) {
			while (circlePosition.y < 1000) {

				if (timeconstant >= 0 && circlePosition.x == 370 && circlePosition.y == 370  || timeconstant >= 0 && circlePosition.x == 530 && circlePosition.y == 370 || timeconstant >= 0 && circlePosition.x == 370 && circlePosition.y == 530 || timeconstant >= 0 && circlePosition.x == 530 && circlePosition.y == 530) {
					ofSetColor(0, 0, 255);
				}
				else if (timeconstant < 0 && circlePosition.x == 370 && circlePosition.y == 370 || timeconstant < 0 && circlePosition.x == 530 && circlePosition.y == 370 || timeconstant < 0 && circlePosition.x == 370 && circlePosition.y == 530 || timeconstant < 0 && circlePosition.x == 530 && circlePosition.y == 530) {
					ofSetColor(255);
				}
				else if (timeconstant < 0 && circlePosition.x == 450 && circlePosition.y == 370 || timeconstant < 0 && circlePosition.x == 370 && circlePosition.y == 450 || timeconstant < 0 && circlePosition.x == 530 && circlePosition.y == 450 || timeconstant < 0 && circlePosition.x == 450 && circlePosition.y == 530) {
					ofSetColor(0, 0, 255);
				}
				else if (fmod(circlePosition.y - 50, 160) == 0 && fmod(circlePosition.x - 50, 160) == 0) {
					ofSetColor(0, 0, 255);
					float distance = mouse.distance(circlePosition);

				}
				else {
					ofSetColor(255);
				}

				ofDrawCircle(circlePosition.x, circlePosition.y, circleRadius);
				circlePosition.y = circlePosition.y + 80;
			}
			circlePosition.x += 80;
			circlePosition.y = 50;
		}

	//rahmen
	ofSetColor(0); //schwarz
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
