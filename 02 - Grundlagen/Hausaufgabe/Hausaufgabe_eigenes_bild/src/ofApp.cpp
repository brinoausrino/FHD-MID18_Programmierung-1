#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(100, 100, 255);
	ofSetCircleResolution(500);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	/*ursprünglich sollte sich der "tag" anschalten, wenn man über den mond hovert,
	aber aus testzwecken wird diese funktion lediglich der linken bildhälfte (x < 500) zugeordnet*/

	float t = ofGetElapsedTimef(); //zeit
	int circlex = 730; //startpunkte des "regens"
	int circley = 700;

	//ofVec2f centerbig(300, 400);
	//ofVec2f centersmall(350, 400);
	ofVec2f center(290, 410); //zentrum der "kontrollsonne"
	ofVec2f mouseposition(mouseX, mouseY);
	//float distancebig = mouseposition.distance(centerbig);
	//float distancesmall = mouseposition.distance(centersmall);
	float distance = mouseposition.distance(center);
	bool day = true;

	if (distance < 350) {
		day = true;
	}
	else {
		day = false;
	}

		//himmel
	if (mouseX > 500) {
		ofSetColor(0); //schwarz
	}
	else {
		ofSetColor(100, 100, 255); //himmelblau
	}
	ofDrawRectangle(0, 0, 1000, 1000);

		//"kontrollsonne"
	if (day = false) {
		ofSetColor(15); //dunkelgrau
	}
	else {
		ofSetColor(200, 20, 20); //rot
	}
	//ofDrawCircle(290, 410, 350);

		//sonne_mond
	if (mouseX > 500)
		ofSetColor(210); //weiss
	else
		ofSetColor(220, 220, 30); //gelb
	ofDrawCircle(300, 400, 300 + 35 * (sin(t * 4)));

	if (mouseX > 500)
		ofSetColor(120); //grau
	else
		ofSetColor(240, 40, 225); //pink
	ofDrawCircle(350, 400, 230 + 25 * (cos(t * 4)));

		//regen
	ofSetColor(0, 30, 80); //dunkelblau
	while (circlex < 930) {
		circley = 700;
		circlex = circlex + 30;
		while (circley < 920) {
			ofDrawCircle(circlex + (circley / 10) - 65 + rand() % 3, circley + mouseY % 20 + rand() % 3, 7);
			circley = circley + 20;
		}
	}

		//wolke
	ofSetColor(150, 150, 255); //hellblau
	ofDrawCircle(800, 700, 60);
	ofDrawCircle(850, 700, 60);
	ofDrawCircle(900, 700, 60);
	ofDrawCircle(825, 650, 60);
	ofDrawCircle(875, 650, 60);

		//boden
	ofSetColor(80, 50, 0); //braun
	ofDrawRectangle(600, 900, 400, 100);

	ofSetColor(0, 150, 0); //grün
	ofDrawRectangle(620, 900, 380, 30);

		//blume
	ofSetColor(0, 100, 0); //dunkleres grün
	ofDrawRectangle(830, 800, 4, 102);

	if (mouseX > 500) {
		ofSetColor(0, 80, 0); //dunkelstes grün
		ofDrawTriangle(820, 815, 847, 815, 827, 780);
	}
	else {
		ofSetColor(210, 210, 30); //gelb
		ofDrawCircle(832, 800, 35);
	}

	ofSetColor(255);

	ofDrawBitmapString("Die Blume wird bei dem durchgehenden Regen bald ersaufen D:", 20, 985);
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
