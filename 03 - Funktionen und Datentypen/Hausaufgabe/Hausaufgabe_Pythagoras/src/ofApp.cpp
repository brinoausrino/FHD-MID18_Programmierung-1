#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255);
	ofSetCircleResolution(200);

float h_ak = 5;
float h_gk = 3;

float h = hypothenuse(h_ak,h_gk);

cout << "Die Hypothenuse der Katheten " << h_ak <<" und " << h_gk << " ist " << h <<endl;


float k_gk = 7;
float k_ht = 13;

float k = kathete(k_gk, k_ht);

cout << "Die Kathete der Gegenkathete " << k_gk << " und Hypothenuse " << k_ht << " ist " << k << endl;



float aKathete[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
float aHypothenuse[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
int arraySize = 10;

for (int i = 0; i < arraySize; i++) {
	float kath = kathete(aKathete[i], aHypothenuse[i]);
	cout << "Die Kathete an der Stelle " << i+1 << " der Arrays ist " << kath << " und berechnet sich aus " << aKathete[i] << " und " << aHypothenuse[i] << "." << endl;
}


cout << "Wenn die Werte als Eingabe fuer die hypothenuse()-Funktion verwendet werden, werden sie als Ankathete und Gegenkathete behandelt." << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


}

float ofApp::hypothenuse(float ankathete, float gegenkathete)
{
	float hyp = sqrt((ankathete*ankathete) + (gegenkathete*gegenkathete));
	return hyp;
}

float ofApp::kathete(float ankathete, float hypothenuse)
{
	float kat = sqrt((hypothenuse*hypothenuse) - (ankathete*ankathete));
	return kat;
}


float ofApp:: Kathete(float Ankathete, float Hypothenuse)
{
	float return_wert;

	return_wert = sqrt((Hypothenuse)*(Hypothenuse)-(Ankathete)*(Ankathete));

	return return_wert;
}
