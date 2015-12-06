//
//  SetTexture.cpp
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/06.
//
//

#include "SetTexture.h"

//--------------------------------------------------------------
void SetTexture::setup(){
    
}

//--------------------------------------------------------------
void SetTexture::update(){
    
}

//--------------------------------------------------------------
void SetTexture::draw(){
    ofBackground(0);
    ofSetColor(255);
    ofDrawBitmapString("Template State", 20, 20);
    ofDrawBitmapString("ShreadData = " + getSharedData().sharedMsg, 20, 40);
}

//--------------------------------------------------------------
string SetTexture::getName(){
    return "SetTexture";
}

//--------------------------------------------------------------
void SetTexture::keyPressed(int key){
    
}
