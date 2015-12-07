//
//  PointCloud.cpp
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/06.
//
//

#include "PointCloud.h"

//--------------------------------------------------------------
void PointCloud::setup(){
    gui.setup();
    gui.add(near.setup("near", 50, 0, 500));
    gui.add(far.setup("far", 500, 0, 10000));
    gui.add(step.setup("step", 10, 5, 100));
    gui.add(radius.setup("radius", 10, 0, 50));
}

//--------------------------------------------------------------
void PointCloud::update(){
    kinect.update();
}

//--------------------------------------------------------------
void PointCloud::draw(){
    easyCam.begin();
    drawPointCloud();
    easyCam.end();
    
    gui.draw();
}

//--------------------------------------------------------------
void PointCloud::drawPointCloud() {
    
    int w = 640;
    int h = 480;
    ofVboMesh mesh;
    mesh.setMode(OF_PRIMITIVE_POINTS);
    for(int y = 0; y < h; y += step) {
        for(int x = 0; x < w; x += step) {
            if(kinect.getDistanceAt(x, y) > near && kinect.getDistanceAt(x, y) < far) {
                mesh.addColor(kinect.getColorAt(x,y));
                mesh.addVertex(kinect.getWorldCoordinateAt(x, y));
            }
        }
    }
    glPointSize(radius);
    ofPushMatrix();
    ofScale(1, -1, -1);
    ofTranslate(0, 0, -1000);
    ofEnableDepthTest();
    mesh.drawVertices();
    ofDisableDepthTest();
    ofPopMatrix();
}

//--------------------------------------------------------------
string PointCloud::getName(){
    return "PointCloud";
}

//--------------------------------------------------------------
void PointCloud::keyPressed(int key){
    
}
