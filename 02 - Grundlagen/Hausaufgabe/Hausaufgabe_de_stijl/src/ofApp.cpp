#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(1,0,80); //blau
    ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (mouseX < 500) {
		ofSetColor(0,198,18);
		ofDrawRectangle(20, 0, 960, 1000);

	}



	float t = ofGetElapsedTimef();
	int x = sin(t)*40;
	int y = sin(t) * 80;
	int z = sin(t) * 100;
	int c = cos(t) * 80;



	// kreis oben links
	ofSetColor(247,198,18);//gelb
	ofDrawCircle(c+0,c+0,450);
	ofSetColor(52,39,30);//braun
	ofDrawCircle(0,0,z+225);

	//dreieck
	ofSetColor(226,40,27); //rot
	ofDrawTriangle(0,x+1000,z+300,x+700,y+550,x+1000);


		//kreise unten
		ofSetColor(119, 132, 140);//grau
		ofDrawCircle(y+600, y+600, 350); //statisch

		ofSetColor(247, 198, 18);//gelb
		ofDrawCircle(z+678, y+498, x+220);
		ofSetColor(52, 39, 30);//braun
		ofDrawCircle(y+712, z+449, x+130);

		//rahmen
		ofSetColor(0); //schwarz
		ofDrawRectangle(0, 0, 1000, 20);
		ofDrawRectangle(0, 0, 20, 1000);
		ofDrawRectangle(0, 980, 1000, 20);
		ofDrawRectangle(980, 0, 20, 1000);

		
	
	
}

void ofApp::keyPressed(int key){
	if (key == 's'){
		ofSaveScreen("capture_" + ofGetTimestampString() + ".png");
	}
}
