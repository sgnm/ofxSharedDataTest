#pragma once

#include "ofMain.h"
#include "ofxStateMachine.h"
#include "SharedData.h"
#include "ofxKinect.h"

#define OUT_W 854
#define OUT_H 480

class ofApp : public ofBaseApp{

	public:
        //setup
		void setup();
        void setupGUI();
        void setupKinect();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    itg::ofxStateMachine<SharedData> stateMachine;
    ofxKinect *kinect;
};
