#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(255);
ofSetCircleResolution(200);

float x = 3;
float y = 7;

float c = hypothenuse(x, y);
 
cout << " die hypothenuse der katheten " << x << " und " << y << " ist " << c << endl;

float k = 3;
float h = 5; //4.24264


float k2 = kathete(k, h);

cout << " die fehlende kathete einer hypothenuse " << h << " und einer kathete " << k << " ist " << k2 << endl;


float aKathete[] = { 1,2,3,4,5,5,4,3,2,1 };
float aHypothenuse[] = { 11,12,13,14,15,15,14,13,12,20 };
int arrays = 10;

for (int i = 0; i < arrays; i++) {

	float bKathete = kathete(aKathete[i], aHypothenuse[i]);
	cout << " die Kathete " << aKathete[i] << " ist an der stelle " << i + 1 << " = " << bKathete << endl;


	
}


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


}

float ofApp::hypothenuse(float x, float y)
{
	float Ergebnis = sqrt((x)*(x)+(y)*(y));
	return Ergebnis;

}

float ofApp::kathete(float k, float h)
{
	float Ergebnis = sqrt((h)*(h)-(k)*(k));
	return Ergebnis;
}


