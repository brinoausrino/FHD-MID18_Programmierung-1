#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSeedRandom();
	ofSetCircleResolution(500);
	ofSetBackgroundColor(0);
	ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){
	cout << "circles: " << v_circles.size() << "  squares: " << v_squares.size() << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < v_circles.size(); i++) {
		ofDrawCircle(v_circles[i].x, v_circles[i].y, v_circles[i].z);
	}

	for (int i = 0; i < v_squares.size(); i++) {
		ofDrawRectangle(v_squares[i].x, v_squares[i].y, v_squares[i].z, v_squares[i].w);
	}

	for (int i = 0; i < v_triangles.size(); i++) {
		ofDrawTriangle(v_triangles[i][0], v_triangles[i][1], v_triangles[i][2], v_triangles[i][3], v_triangles[i][4], v_triangles[i][5]);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 114) {
		if (v_type.size() > 0) {
			if (v_type.back() == 'c') {
				v_type.pop_back();
				v_circles.pop_back();
			}
			else if (v_type.back() == 's') {
				v_type.pop_back();
				v_squares.pop_back();
			}
			else if (v_type.back() == 't') {
				v_type.pop_back();
				v_triangles.pop_back();
			}
			else {
				cout << "Error: Letztes Element nicht erkannt" << endl;
			}
		}
	}
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
	if (button == 0) {
		randomCircle(x, y);
	}

	if (button == 1) {
		randomTriangle(x, y);
	}

	if (button == 2) {
		randomSquare(x, y);
	}
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

void ofApp::randomCircle(int x, int y)
{
	ofVec3f randCircle;
	randCircle.set(x, y, ofRandom(5, 100));

	v_circles.push_back(randCircle);
	v_type.push_back('c');
}

void ofApp::randomSquare(int x, int y)
{
	ofVec4f randSquare;
	randSquare.set(x, y, ofRandom(5, 100), ofRandom(5, 100));

	v_squares.push_back(randSquare);
	v_type.push_back('s');
}

void ofApp::randomTriangle(int x, int y)
{
	vector<int> randTriangle;
	int randDist = ofRandom(5, 50);

	randTriangle.push_back(x);
	randTriangle.push_back(y);
	randTriangle.push_back(x + randDist);
	randTriangle.push_back(y + randDist);
	randTriangle.push_back(x - randDist);
	randTriangle.push_back(y + randDist);

	v_triangles.push_back(randTriangle);
	v_type.push_back('t');
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
