#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   ofBackground(20, 20, 87);
   ofSetCircleResolution(64);
   //ofEnableBlendMode(OF_BLENDMODE_ADD);

}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();

    ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofNoFill();
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),100);
    ofSetLineWidth(2);

    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateX(degree*0.1);
    ofRotateY(5);
    ofDrawCircle(0,0,350);
    ofPopMatrix();

    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(80);
    ofRotate(3*degree);
    ofDrawCircle(0,0,350);
    ofPopMatrix();

    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(10);
    ofRotate(degree);
    ofDrawCircle(0,0,350);
    ofPopMatrix();


    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(0.8);
    ofRotateX(0.5*degree);
    ofDrawCircle(0,0,350);
    ofPopMatrix();

    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(10);
    ofRotateX(degree*0.2);
    ofDrawCircle(0,0,350);
    ofPopMatrix();

    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(20);
    ofRotateX(degree);
    ofDrawCircle(0,0,350);
    ofPopMatrix();


    ofPushMatrix();
    degree=degree+1;
    //ofTranslate(ofGetWidth()/2,ofGetHeight()/2, 0);
    ofRotateY(0.5*degree);
    ofRotateX(10);
    ofDrawCircle(0,0,350);
    ofPopMatrix();

          for(int i=0;i<num;i=i+1){
//              ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),200);
//

           point[i].draw();
        for(int j=0;j<num;j=j+1){
               point[j].draw();
             for(int k=0;k<30;k=k+1){
                 // point[k].draw();
            if(ofDist(point[i].x,point[i].y,point[i].z,point[j].x,point[j].y,point[j].z)<80){
             if(ofDist(point[i].x,point[i].y,point[i].z,point[k].x,point[k].y,point[k].z)<80){


                    hueColor = int(ofRandom(255));
                    ofColor a=0;
                    ofFill();
               rColor=rColor+10;
                 if(rColor>100){
                     rColor=50;
                 }

                    //ofSetColor(0,0,rColor,ofRandom(200));
            ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255),100);
                ofBeginShape();
                ofSetPolyMode(OF_POLY_WINDING_NONZERO);
                ofVertex(point[i].x,point[i].y,point[i].z);
                ofVertex(point[j].x,point[j].y,point[j].z);
                ofVertex(point[k].x,point[k].y,point[k].z);
                ofEndShape();


                }
            }
                   }
               }
        }
    cam.end();

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
