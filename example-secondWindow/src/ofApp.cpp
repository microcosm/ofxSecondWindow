#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("first window");

    // fboSecondWindow will be the fbo we draw into for the second window
    fbo.allocate(1024, 768, GL_RGBA);
    
    // the arguments for the second window are its initial x and y position,
    // and its width and height. the width and height should match the fbo
    secondWindow.setup("second window", 50, 50, fbo.getWidth(), fbo.getHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw to the main window
    ofSetColor(0, 255, 0);
    ofDrawBitmapString("this is the first window", 100, 100);
    ofRect(150, 190, 240, 160);
    
    // draw the second window
    fbo.begin();
    ofBackground(255);
    ofSetColor(0, 0, 255);
    ofDrawBitmapString("this is the second window", 100, 100);
    ofEllipse(320, 250, 200, 200);
    fbo.end();
    
    // render the fbo on the second window
    secondWindow.draw(&fbo);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}