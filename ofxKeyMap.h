/************************************************************

OpenFrameworks addon

File: 			ofxKeyMap.h
Description: 	Keeps track of pressed keys

    Since OF007 this feature is part of OF.
    You can now use ofGetKeyPressed(key) instead.

By Rick Companje
Created: 2009.09.17
Last modified: 2011.12.16

************************************************************/

#pragma once
#include "ofMain.h"

class ofxKeyMap {
public:
    inline bool operator [] (int key) { return ofGetKeyPressed(key); }
    
};
