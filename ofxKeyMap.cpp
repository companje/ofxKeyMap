#include "ofxKeyMap.h"

ofxKeyMap::ofxKeyMap() {
	ofAddListener(ofEvents.keyPressed, this, &ofxKeyMap::keyPressed);
	ofAddListener(ofEvents.keyReleased, this, &ofxKeyMap::keyReleased);

	for (int i=0; i<NUM_KEYS; i++) keys[i]=false;
}

void ofxKeyMap::keyPressed(ofKeyEventArgs &e) {
    keys[e.key]=true;
}

void ofxKeyMap::keyReleased(ofKeyEventArgs &e) {
    keys[e.key]=false;
}

bool ofxKeyMap::isKeyDown(int key) {
    return keys[key];
}

