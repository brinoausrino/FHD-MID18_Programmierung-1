#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(1, 0, 80); //blau
    ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

	float t = ofGetElapsedTimef();
	int x = (sin(t) * 40);

	if (mouseX < 300) {


		ofSetBackgroundColor(0);
	else {
		ofGetBackgroundColor(167);
	}

	}


	if (mouseX > 450) {

		ofSetColor(255);
		ofDrawCircle(200 + x, 200 + x, 100 + x);
	}
	else
	{
		
		ofSetColor(119, 132, 140);
		ofDrawCircle(200 + x, 200 + x, 100 + x);
	}
	


	



	

	// kreis oben links
	ofSetColor(0);//schwarz
	ofDrawCircle(100,100,50);

	if (mouseX > 450) {

		ofSetColor(52, 39, 30);//braun
		ofDrawCircle(x * 10, x * 10, x * 3);
	}
	else
	{

		ofSetColor(198, 90, 15);//braun
		ofDrawCircle(x * 10, x * 10, x * 3);
	}

	

	//dreieck
	ofSetColor(226,40,27); //rot
	ofDrawTriangle(0,1000,300,700,550,1000);

	//kreise unten
	ofSetColor(119,132,140);//grau
	ofDrawCircle(x*50,600,350); //statisch


	if (mouseY > 500) {

		ofSetColor(247, 198, 18);//gelb
		ofDrawCircle(678, 498, x * 5);
	}
	else
	{

		ofSetColor(226, 40, 27);//gelb
		ofDrawCircle(678, 498, x * 5);
	}
	
	ofSetColor(52,39,30);//braun
	ofDrawCircle(712,x*(-5),x*2);

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
