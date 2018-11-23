#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
		ofBackground(255);

		float a = 3;
		float b = 3;

		float c = hypothenuse(a, b);

		cout << "Die Hypothenuse der Katheten " << a << " und " << b << " ist " << c << endl;




		float k = 3;
		float h = 4.24264;

		float k2 = Kathete(k, h);

		cout << "Die Kathete der Hypothenuse und der Kathete " << h << " und " << k << " ist " << k2 << endl;


		float aKathete[] = { 11,1,2,3,4,5,6,7,8,9 };
		float aHypothenuse[] = { 13,7,8,5,16,19,20,21,22,10 };
		int arrays = 10;

		for (int i = 0; i < arrays; i++) {
			float bKathete = Kathete(aKathete[i], aHypothenuse[i]);
			cout << " Die Kathete " << aKathete[i] << " ist an der Stelle " << i + 1 << " = " << bKathete << endl;
		}
	



		float cKathete[] = { 11,1,2,3,4,5,6,7,8,9 };
		float aKathete2[] = { 13,7,8,5,16,19,20,21,22,10 };
		int arrays2 = 10;

		for (int i = 0; i < arrays2; i++) {
			float bHypothenuse = hypothenuse(cKathete[i], aKathete2[i]);
			cout << " Die Hypothenuse " << cKathete[i] << " ist an der Stelle " << i + 1 << " = " << bHypothenuse << endl;
		}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	
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

void ofApp::dragEvent(ofDragInfo dragInfo)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

float ofApp::hypothenuse(float a, float b)
{
	float Ergebnis = sqrt((a)*(a)+(b)*(b));
	return Ergebnis;
}

float ofApp::Kathete(float k, float h)
{
	float Ergebnis = sqrt((h)*(h)-(k)*(k));
	return Ergebnis;
}
