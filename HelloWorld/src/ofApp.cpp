#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    ofToggleFullscreen();
    boxSize = 15;
    backGroundImage.load("lifeistech.png");
    
    for (unsigned int i = 0; i < NUM; i++) {
        mBox[i].setPosition(ofRandom(-500, 500), ofRandom(-500, 500), ofRandom(-500, 500));
        mBox[i].set(boxSize);
    }
    sound.loadSound("e.d.i.t..mp3");
    sound.play();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
    backGroundImage.draw(0, 0, ofGetWidth(), ofGetHeight());
    vec.set(mouseX - p.x, mouseY - p.y);
    cam.begin();
    ofPushMatrix();
    ofRotateY(ofGetFrameNum());
    int alpha = abs(vec.x) + abs(vec.y);
    ofSetColor(ofColor::fromHsb(ofGetFrameNum() % 255, 255, 255));
    for (unsigned int i = 0; i < NUM; i++) {
        mBox[i].draw();
    }
    ofPopMatrix();
    
    ofSetColor(200, 100, 255);
    box.setPosition(0, 0, 0);
    box.set(100);
    box.draw();
    cam.end();
    p.x = mouseX;
    p.y = mouseY;
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
