//
//  SetTexture.h
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/06.
//
//

#ifndef __ofxSharedDataTest__SetTexture__
#define __ofxSharedDataTest__SetTexture__

#include <stdio.h>
#include "ofxState.h"
#include "SharedData.h"

class SetTexture : public itg::ofxState<SharedData>{
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    string getName();
};

#endif /* defined(__ofxSharedDataTest__SetTexture__) */
