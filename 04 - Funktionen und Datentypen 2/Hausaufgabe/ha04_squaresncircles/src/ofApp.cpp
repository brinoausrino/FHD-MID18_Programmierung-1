#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSeedRandom();
	ofSetCircleResolution(500);
	ofSetBackgroundColor(0);
	ofSetColor(255);

	i1.load("400.jpg");
	i2.load("logo.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){
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

	for (int i = 0; i < v_logo.size(); i++) {
		i1.draw(v_logo[i].x, v_logo[i].y, v_logo[i].z, v_logo[i].w);
	}

	for (int i = 0; i < v_400.size(); i++) {
		i2.draw(v_400[i].x, v_400[i].y, v_400[i].z, v_400[i].w);
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
			else if (v_type.back() == 'l') {
				v_type.pop_back();
				v_logo.pop_back();
			}
			else if (v_type.back() == '4') {
				v_type.pop_back();
				v_400.pop_back();
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

	int type = ofRandom(0, 2.9);

	if (button == 0) {
		cout << "schleife" << endl;
		if (ofGetMousePressed(2) == true) {
			v_logo.push_back(ofVec4f(x, y, 50 + (type * 25), 50 + (type * 25)));
			v_type.push_back('l');
			cout << "1" << endl;
		}
		else if (ofGetMousePressed(1) == true) {
			v_400.push_back(ofVec4f(x, y, 50 + (type * 25), 50 + (type * 25)));
			v_type.push_back('4');
			cout << "2" << endl;
		}
		else {
			if (type == 0) {
				randomCircle(x, y);
			}

			if (type == 1) {
				randomTriangle(x, y);
			}

			if (type == 2) {
				randomSquare(x, y);
			}
			cout << "3" << endl;
		}
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
	randTriangle.push_back(x + randDist/2);
	randTriangle.push_back(y + randDist);
	randTriangle.push_back(x - randDist/2);
	randTriangle.push_back(y + randDist);

	v_triangles.push_back(randTriangle);
	v_type.push_back('t');
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
