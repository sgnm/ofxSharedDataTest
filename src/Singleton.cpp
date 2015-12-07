//
//  Singleton.cpp
//  ofxSharedDataTest
//
//  Created by Shin on 2015/12/08.
//
//

#include "Singleton.h"

//static Singleton &s = Singleton::getInstance();

Singleton &Singleton::getInstance(){
    static Singleton obj;
    return obj;
}
