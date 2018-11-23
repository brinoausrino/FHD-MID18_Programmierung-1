#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255);
	ofSetCircleResolution(200);

	int ak = 7;
	int gk = 8;

	float h = hypothenuse(ak, gk);

	float Ankathete[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	float Hypothenuse[] = { 11,12,13,14,15,16,17,18,19,20 };



	cout << "Die Hypothenuse der Katheten " << ak << " und " << gk << " ist " << h << endl;	

	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;


	for (int i = 0; i < 10; i++) {
		
		cout << "Ankathete:		" << Ankathete[i] << "	" << "Hypothenuse:	"  << Hypothenuse[i] << endl;
		cout << "Gegenkathete:		" << Kathete(Ankathete[i], Hypothenuse[i]) << endl;
		cout << " " << endl;
	}


	


		
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


}

float ofApp::hypothenuse(float ankathete, float gegenkathete)
{
	float hypothenuse = sqrt((ankathete)*(ankathete)+(gegenkathete)*(gegenkathete));

	return hypothenuse;
}


float ofApp:: Kathete(float Ankathete, float Hypothenuse)
{
	float return_wert;

	return_wert = sqrt((Hypothenuse)*(Hypothenuse)-(Ankathete)*(Ankathete));

	return return_wert;
}
