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

	float t = ofGetElapsedTimef();
	float temp = sin(t) * 25;

	// kreis oben links
	ofSetColor(247,198,18);//gelb
	ofDrawCircle(0,0,450);

	if (mouseX > 500) {
		ofSetColor(52, 39, 30);//braun
		ofDrawCircle(0 + temp, 0 + temp, 225);
	}
	else {
		ofSetColor(0, 150, 100);
		ofDrawCircle(0 + temp, 0 + temp, 225);
	}

	//dreieck
	ofSetColor(226,40,27); //rot
	ofDrawTriangle(0,1000,300,700,550,1000);

	//kreise unten
	ofSetColor(119,132,140);//grau
	ofDrawCircle(600,600,350*(temp/25)); 

	ofSetColor(247,198,18);//gelb
	ofDrawCircle(678+temp,498+temp*15,220);
	ofSetColor(52,39,30);//braun
	ofDrawCircle(712+temp*15,449,130);

	//rahmen
	ofSetColor(0); //schwarz
	ofDrawRectangle(0,0,1000,20);
	ofDrawRectangle(0,0,20,1000);
	ofDrawRectangle(0,980,1000,20);
	ofDrawRectangle(980,0,20,1000);

	if (mouseX > 500) {
		ofSetColor(52, 39, 30);//braun
		ofDrawCircle(250 + temp, 250 + temp, 50);
	}
	else {
		ofSetColor(0, 150, 100);
		ofDrawCircle(250 + temp, 250 + temp, 50);
	}
}

void ofApp::keyPressed(int key){
	if (key == 's'){
		ofSaveScreen("capture_" + ofGetTimestampString() + ".png");
	}
}
