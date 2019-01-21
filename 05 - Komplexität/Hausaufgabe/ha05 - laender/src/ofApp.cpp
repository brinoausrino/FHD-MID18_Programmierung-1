#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofFile jsonFile("country-by-surface-area.json");
	ofJson json;

	//trueTypeFont, siehe header
	font.load("Roboto-Regular.ttf", 12);

	if (jsonFile.exists()) {
		jsonFile >> json;
	}
	else {
		cout << "Keine .json-Datei gefunden" << endl;
	}

	//Object Land, Vector laender, siehe header
	for (int i = 0; i < json.size(); i++) {
		laender.push_back(Land());
		laender.back().area = json[i]["area"];
		laender.back().name = json[i]["name"].get<string>();
	}

	sort(laender.begin(), laender.end());
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	int x = 45;
	int sum = 0;
	bool isIndented = false;
	for (int i = 0; i < laender.size(); i++) {
		if (laender[i].area > 500000) {
			ofDrawRectangle(x, 20, 20, laender[i].area / 50000);

			if (isIndented == true) {
				ofDrawLine(x, (laender[i].area / 50000) + 25, x, (laender[i].area / 50000) + 90);

				ofPushMatrix();
				ofTranslate(x, (laender[i].area / 50000) + 100);
				ofRotate(45);
				font.drawString(laender[i].name, 0, 0);
				//ofDrawBitmapString(laender[i].name, 0, 0);
				ofPopMatrix();
			}
			else {
				ofDrawLine(x, (laender[i].area / 50000) + 25, x, (laender[i].area / 50000) + 115);

				ofPushMatrix();
				ofTranslate(x, (laender[i].area / 50000) + 125);
				ofRotateDeg(45);
				font.drawString(laender[i].name, 0, 0);
				//ofDrawBitmapString(laender[i].name, 0, 0);
				ofPopMatrix();
			}
			x += 35;
			//isIndented = !isIndented;
		}
		else {
			sum += laender[i].area;
		}
	}
	ofDrawRectangle(10, 20, 20, sum / 50000);
	font.drawString("Others", 10, (sum / 50000) + 50);
	//ofDrawBitmapString("Others", 10, (sum / 50000) + 50);
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
