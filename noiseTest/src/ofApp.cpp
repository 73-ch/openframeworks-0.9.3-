#include "ofApp.h"
const int ofApp::WIDTH;
const int ofApp::HEIGHT;
const int ofApp::NUM_PARTICLE;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofEnableDepthTest();
    ofEnableAlphaBlending();
    
    cam.setDistance(100);
    
    for (unsigned int i = 0; i < WIDTH; i++) {
        for (unsigned int j = 0; j < HEIGHT; j++) {
            verts[j * WIDTH + i].set(i - WIDTH / 2, j - HEIGHT / 2, 0);
            colors[j * WIDTH + i].set(0.5, 0.8, 1.0, 1.0);
        }
    }
    
    vbo.setVertexData(verts, NUM_PARTICLE, GL_DYNAMIC_DRAW);
    vbo.setColorData(colors, NUM_PARTICLE, GL_DYNAMIC_DRAW);
}

//--------------------------------------------------------------
void ofApp::update(){
    for (unsigned int i = 0; i < WIDTH; i++) {
        for (unsigned int j = 0; j < HEIGHT; j++) {
            float x = ofNoise(i + ofGetElapsedTimef()) * 100.0;
            float y = ofNoise(j + ofGetElapsedTimef()) * 100.0;
            float z = x + y;
            
            verts[j * WIDTH + i] = ofVec3f(i - WIDTH/2,j - HEIGHT/2,z);
        }
    }
    vbo.updateVertexData(verts, NUM_PARTICLE);
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    ofSetColor(255);
    vbo.draw(GL_POINTS,0,NUM_PARTICLE);
    cam.end();
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
