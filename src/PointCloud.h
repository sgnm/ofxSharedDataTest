//
//  PointCloud.h
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/06.
//
//

#ifndef __ofxSharedDataTest__PointCloud__
#define __ofxSharedDataTest__PointCloud__

#include <stdio.h>
#include "ofxState.h"
#include "SharedData.h"
#include "ofxGui.h"

#define OUT_W 854
#define OUT_H 480

class PointCloud : public itg::ofxState<SharedData>{
    void setup();
    void update();
    void draw();
    void drawPointCloud();
    void keyPressed(int key);
    
    string getName();
    
    ofxKinect *kinect;
    
    ofxPanel gui;
    ofxIntSlider near;
    ofxIntSlider far;
    ofxIntSlider step;
    ofxIntSlider radius;
    
    int angle;
    
    ofEasyCam easyCam;
    
};

#endif /* defined(__ofxSharedDataTest__PointCloud__) */
