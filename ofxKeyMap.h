#ifndef OFX_KEY_MAP
#define OFX_KEY_MAP

/************************************************************

OpenFrameworks Library

File: 			ofxKeyMap.h
Description: 	Keeps track of pressed keys
Notes:

Last Modified: 2009.09.17
Creator: Rick Companje

************************************************************/

#include "ofMain.h"

#define NUM_KEYS 512

class ofxKeyMap {
public:

    ofxKeyMap();

    bool isKeyDown(int key);

    inline bool & operator [] (int i) { return keys[i]; }

private:
    bool keys[NUM_KEYS];
    void keyPressed(ofKeyEventArgs &e);
	void keyReleased(ofKeyEventArgs &e);
};

#endif
