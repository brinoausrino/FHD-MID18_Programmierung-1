#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0);
	ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofVec2f p1 = ofVec2f(50, ofGetHeight() - 50);
	ofVec2f p2 = ofVec2f(ofGetWidth() - 50, ofGetHeight() - 50);

	spike(p1, p2);
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

void ofApp::genNode(ofVec2f p1, ofVec2f p2)
{
	ofVec2f pM = p1.getMiddle(p2);
	ofVec2f tempVec = p2 - p1;
	pM -= tempVec.getPerpendicular()*(tempVec.length() / 7);

	if (pM.distance(p1) >= 100) {
		genNodeNeg(p1, pM);
		genNodeNeg(pM, p2);
	}
	else {
		ofDrawLine(pM, p1);
		ofDrawLine(pM, p2);
	}
}

void ofApp::genNodeNeg(ofVec2f p1, ofVec2f p2)
{
	ofVec2f pM = p1.getMiddle(p2);
	ofVec2f tempVec = p2 - p1;
	pM += tempVec.getPerpendicular()*(tempVec.length() / 7);

	if (pM.distance(p1) >= 100) {
		genNode(p1, pM);
		genNode(pM, p2);
	}
	else {
		ofDrawLine(pM, p1);
		ofDrawLine(pM, p2);
	}
}

void ofApp::spike(ofVec2f p1, ofVec2f p2)
{
	ofVec2f length = p2 - p1;
	ofVec2f oneThird = p1 + (length / 3);
	ofVec2f twoThird = p1 + ((length / 3) * 2);
	ofVec2f middle = p1;
	middle.middle(p2);
	middle -= length.getPerpendicular()*((length.length()/3)+(mouseX/100));

	if (middle.distance(oneThird) >= 40) {
		spike(p1, oneThird);
		spike(oneThird, middle);
		spike(middle, twoThird);
		spike(twoThird, p2);
	}
	else {
		//ofSetColor(255, 255, 255);
		ofDrawLine(p1, oneThird);

		//ofSetColor(255, 0, 0);
		ofDrawLine(oneThird, middle);

		//ofSetColor(0, 255, 0);
		ofDrawLine(middle, twoThird);

		//ofSetColor(0, 0, 255);
		ofDrawLine(twoThird, p2);
	}
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
