#include "ofApp.h"
#include "PointCloud.h"
#include "SetTexture.h"
#include "Singleton.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(false);
    ofSetFrameRate(0);
    ofSetLogLevel(OF_LOG_VERBOSE);
    stateMachine.getSharedData().sharedMsg = "hoge";
    stateMachine.addState<PointCloud>();
    stateMachine.addState<SetTexture>();
    setupKinect();
}
//--------------------------------------------------------------
void ofApp::setupGUI(){
    
}
//--------------------------------------------------------------
void ofApp::setupKinect(){
    kinect.init();
    kinect.open();
}

//--------------------------------------------------------------
void ofApp::update(){
    kinect.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetWindowTitle(ofToString(ofGetFrameRate(), 0));
    kinect.draw(0, 0, kinect.width, kinect.height);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            stateMachine.changeState("PointCloud");
            break;
        case '2':
            stateMachine.changeState("SetTexture");
            break;
        default:
            break;
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
