#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(255);
ofSetCircleResolution(200);

int ak = 5;
int gk = 3;

int h = hypothenuse(ak,gk);

cout << "Die Hypothenuse der Katheten " << ak <<" und " << gk << " ist " << h <<endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){


}

float ofApp::hypothenuse(float ankathete, float gegenkathete)
{

}


