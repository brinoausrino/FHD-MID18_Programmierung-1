#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//	kreisCeption(200, 200, 100, 20);

	int r[] = { 80, 10, 20, 100, 50, 40, 60, 30, 49, 20 };
	int lArray = 9;
	int x = 0;

	ofPushMatrix();
	for (int i = 0; i < lArray - 1; i++) {
		ofDrawCircle(x, 100, r[i]);
		x = x + r[i] + r[i+1];
	}
	ofDrawCircle(x, 100, r[lArray]);
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

void ofApp::kreisCeption(int xcenter, int ycenter, int radius, int countofcircles)
{
	ofSetCircleResolution(500);
	ofNoFill();
	ofSetColor(255);
	
	if (countofcircles = 1) {
		ofDrawCircle(xcenter, ycenter, radius);
	}
	else
	{
		ofDrawCircle(xcenter, ycenter, radius);
		kreisCeption(xcenter - radius * 0.4, ycenter, radius * 0.6, countofcircles - 1);
	}
	
	
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
