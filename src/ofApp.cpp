#include "ofApp.h"
#include "ofMain.h"
ofFbo fbo;

//--------------------------------------------------------------
void ofApp::setup(){
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(238,238,238);

	// set the position of the rectangle:
	myRectangle.pos.x = 100;
	myRectangle.pos.y = 50;
    
    // set Fbo
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);  // higher precision alpha (no artifacts)
    
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();

}

//--------------------------------------------------------------
void ofApp::update(){
	
    myRectangle.zenoToPoint(mouseX, mouseY);
    
    myBall.zenoToPoint(mouseX, mouseY);
    
    myTriangle.zenoToPoint(mouseX, mouseY);
//    fbo.begin();
//    ofClear(255,255,255, 0);
//    fbo.end();

    int mouseX = 0;
    int mouseY = 0;
    
}

//--------------------------------------------------------------



void ofApp::draw(){
	
    fbo.begin();
    ofSetColor(0,0,0, 10); // black with alpha
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    ofSetColor(0,0,255);
    
    myRectangle.draw();
    
    myBall.draw();
    
    myTriangle.draw();
    
    //ofDrawCircle(mouseX, mouseY, 50);
    fbo.end();
    
    ofSetColor(255,255,255);
    fbo.draw(0,0);
    
}

void ofApp::mouseMoved(int x, int y){
    mouseX = x;
    mouseY = y;
}
//void ofApp::mouseDragged(int X, int Y){
//    fbo.begin();
//    myBall.draw();
//    fbo.end();
//
//}
