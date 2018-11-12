#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(1, 0, 80); //blau
	ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){

	//t = ofGetElapsedTimef();

	

}

//--------------------------------------------------------------
void ofApp::draw(){
	float circlex = sin(ofGetElapsedTimef());
	float circley = cos(ofGetElapsedTimef());

	/*ofVec3f yellow(247, 198, 18);
	ofVec3f red(226, 40, 27);
	ofVec3f brown(52, 39, 30);
	ofVec3f grey(119, 132, 148);*/


	// kreise oben links
	if (mouseX > 500)
		ofSetColor(226, 40, 27);
	else if (mouseY > 500)
		ofSetColor(52, 39, 30);
	else
		ofSetColor(247, 198, 18);//gelb
	ofDrawCircle(0, 0, 450);

	if (mouseX > 500)
		ofSetColor(247, 198, 18);
	else if (mouseY > 500)
		ofSetColor(226, 40, 27);
	else
		ofSetColor(52, 39, 30);//braun
	ofDrawCircle(0, 0, 225);

	//dreieck
	if (mouseX > 500)
		ofSetColor(52, 39, 30);
	else if (mouseY > 500)
		ofSetColor(247, 198, 18);
	else
		ofSetColor(226, 40, 27); //rot
	ofDrawTriangle(0, 1000, 300, 700, 550, 1000);

	//kreise unten
	ofSetColor(119, 132, 140);//grau
	ofDrawCircle(600, 600, 350); //statisch

	ofMatrix3x3;
	ofTranslate(600, 600);

		ofMatrix3x3;
		ofTranslate(circlex * 130, circley * 130);

		if (mouseX > 500)
			ofSetColor(226, 40, 27);
		else if (mouseY > 500)
			ofSetColor(52, 39, 30);
		else
			ofSetColor(247, 198, 18);//gelb
		ofDrawCircle(0, 0, 220);

			ofMatrix3x3;
			ofTranslate(circlex * 85, circley * 85);

			if (mouseX > 500)
				ofSetColor(247, 198, 18);
			else if (mouseY > 500)
				ofSetColor(226, 40, 27);
			else
				ofSetColor(52, 39, 30);//braun
			ofDrawCircle(0, 0, 130);

			ofPopMatrix();
		ofPopMatrix();
	ofPopMatrix();
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
