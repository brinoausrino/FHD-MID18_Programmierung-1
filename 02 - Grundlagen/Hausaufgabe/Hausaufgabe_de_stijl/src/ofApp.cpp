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
	float time = ofGetElapsedTimef();

	float yellowX = sin(time) * 130;
	float yellowY = cos(time) * 130;
	float brownX = cos(time) * 5;
	float brownY = sin(time) * 5;

	//Background update
	if (ofGetMouseX() <= 500) { ofBackground(1, 0, 80); }//blau
	else { ofBackground(226, 40, 27); }//rot

	// kreis oben links
	if (ofGetMouseX() <= 500) { ofSetColor(247, 198, 18); }//gelb
	else { ofSetColor(52, 39, 30); }//braun
	ofDrawCircle(0,0,450);
	
	if (ofGetMouseX() <= 500) { ofSetColor(52, 39, 30); }//braun
	else { ofSetColor(247, 198, 18); }//gelb
	ofDrawCircle(0,0,225);

	//dreieck
	if (ofGetMouseX() <= 500) { ofSetColor(226, 40, 27); }//rot
	else { ofSetColor(1, 0, 80); }//blau
	ofDrawTriangle(0,1000,300,700,550,1000);



	//kreise unten
	ofSetColor(119,132,140);//grau
	ofDrawCircle(600,600,350); //statisch

	ofPushMatrix();
	ofTranslate(600, 600);

	if (ofGetMouseX() <= 500) { ofSetColor(247, 198, 18); }//gelb
	else { ofSetColor(52, 39, 30); }//braun
	ofDrawCircle(yellowX, yellowY,220);

	ofPushMatrix();
	ofTranslate(yellowX, yellowY);

	if (ofGetMouseX() <= 500) { ofSetColor(52, 39, 30); }//braun
	else { ofSetColor(247, 198, 18); }//gelb
	ofDrawCircle(712,449,130);

	ofPopMatrix();
	ofPopMatrix();

	//rahmen
	ofSetColor(0); //schwarz
	ofDrawRectangle(0,0,1000,20);
	ofDrawRectangle(0,0,20,1000);
	ofDrawRectangle(0,980,1000,20);
	ofDrawRectangle(980,0,20,1000);
}

void ofApp::keyPressed(int key){
	if (key == 's'){
		ofSaveScreen("capture_" + ofGetTimestampString() + ".png");
	}
}
