//
//  Singleton.h
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/08.
//
//

#ifndef __ofxSharedDataTest__Singleton__
#define __ofxSharedDataTest__Singleton__

#include <stdio.h>
#include "ofxKinect.h"

class Singleton : public ofxKinect{
public:
    static Singleton &getInstance();
private:
    Singleton(){};
    Singleton(const Singleton &other) = delete;
    Singleton &operator=(const Singleton &other) = delete;
};

#endif /* defined(__ofxSharedDataTest__Singleton__) */
