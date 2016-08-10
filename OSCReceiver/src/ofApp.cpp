#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receiver.setup(PORT);
    
    remoteMouse.x = 0;
    remoteMouse.y = 0;
    
    mouseButtonState  = "";
}

//--------------------------------------------------------------
void ofApp::update(){
    while (receiver.hasWaitingMessages()) {
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        
        if (m.getAddress() == "/mouse/position") {
            remoteMouse.x = m.getArgAsInt32(0);
            remoteMouse.y = m.getArgAsInt32(1);
        }else if(m.getAddress() == "/mouse/pressed"){
            mouseButtonState = m.getArgAsString(0);
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    if (mouseButtonState == "down") {
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    }else{
        ofSetColor(0);
    }
    
    ofDrawCircle(remoteMouse.x, remoteMouse.y, 10);
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
