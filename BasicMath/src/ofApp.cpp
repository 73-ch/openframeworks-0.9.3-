#include "ofApp.h"

int color_mode = 0;

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundHex(0x000000);
    ofSetHexColor(0xffffff);
    
    int x = 20;
    for (unsigned int i = 0; i < ofGetWidth() / 20; i++) {
        if (color_mode == 0) {
            ofSetColor(ofColor::fromHsb(255 * pow(sin((float)ofGetElapsedTimeMillis() / 1000 + ((float)i * PI / 600)), 2), 255, 255));
        }else if (color_mode == 1){
            ofSetColor(0, 255, 0);
        }else{
            ofSetColor(0, 0, 255);
        }
        ofDrawLine(x, 0, x, ofGetHeight());
        x += 20;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'c') {
        color_mode = (color_mode + 1) % 3;
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
