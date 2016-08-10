#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    static const int WIDTH = 200;
    static const int HEIGHT = 200;
    static const int NUM_PARTICLE = WIDTH * HEIGHT;
		
    float xNoise;
    float yNoise;
    ofVbo vbo;
    ofVec3f verts[NUM_PARTICLE];
    ofFloatColor colors[NUM_PARTICLE];
    ofEasyCam cam;
};
