#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetCircleResolution(500);

	int c = addValues(7, 8);
	cout << "7 + 8 = " << c << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int sizes[] = {30, 50, 100, 70, 20, 60, 120, 80, 70, 30};
	int sizesSize = 10;
	int x = 25;
	float time = ofGetElapsedTimef();

	for (int i = 0; i < sizesSize; i++) {
		drawMultipleCircles(sizes[i]/10, x, 200, sizes[i]);
		x += 2*sizes[i];
	}

	ofSetColor(255);
	ofFill();
	x = 55;
	float customTime = time;

	for (int i = 0; i < sizesSize; i++) {
		//Der folgende auskommentierte Code ist das Berechnen und Zeichnen des "coolRadius" in einer eigenen Funktion
		//Mir ist es nicht gelungen die Variable x in der eigenen Funktion zu nutzen, weswegen dies hierher ausgelagert wurde.
		
		float sinWave = (sin(time) + 1) / 2;
		float coolRadius = ofMap(sinWave, 0, 1, 0, sizes[i]);
		float coolRadiusNext = ofMap(sinWave, 0, 1, 0, sizes[i + 1]);

		ofDrawCircle(x, 500, coolRadius);
		x += coolRadius + coolRadiusNext;

		//drawCoolCircle(x, 500, sizes[i], customTime);
		customTime += 77; //why is this not working
	}
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

void ofApp::drawMultipleCircles(int nr, int x, int y, int radius)
{
	ofNoFill();
	ofSetColor(0);
	radius = radius / nr;

	for (int i = 0; i < nr; i++) {
		ofDrawCircle(x, y, radius);
		x += 10;
		radius += 10;
	}
}

int ofApp::addValues(int a, int b)
{
	int ergebnis = a + b;
	return ergebnis;
}

void ofApp::drawCoolCircle(int x, int y, int radius, float time)
{
	float sinWave = (sin(time) + 1) / 2;
	float coolRadius = ofMap(sinWave, 0, 1, 0, radius);
	ofDrawCircle(x, y, coolRadius);
	x+= 2 * coolRadius;
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
