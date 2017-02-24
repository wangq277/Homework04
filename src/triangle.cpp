//
//  triangle.cpp
//  rectangleZeno
//
//  Created by Qihui Wang on 2/17/17.
//
//

#include "triangle.hpp"

triangle::triangle(){
    //catchUpSpeedT = 0.06f;
//    pos.x=10;
    speedPerframe = 2;
    
//    pos.y=10;
//    velocity=ofPoint(ofRandom(0,2),ofRandom(0,2));
}

//void init() {
//    pos.x=10;
//    pos.y=10;
//    velocity=ofPoint(ofRandom(0,2),ofRandom(0,2));
//}

//------------------------------------------------------------------

//void update(){
//
//    pos += velocity;
//
//}



void triangle::draw() {
    //pos+=velocity;
    ofSetColor(255,204,92);
    ofDrawTriangle(x, y, x+20, y, x+10, y+18);
    
}

//------------------------------------------------------------------

 void triangle::zenoToPoint(float catchX, float catchY){

     deltaX = catchX - x;
     deltaY = catchY - y;
     
     dist = ofDist(x,y,catchX, catchY);
     
         if (dist > speedPerframe){
             ratio = speedPerframe/dist;
             xSpeed = ratio*deltaX;
             ySpeed = ratio*deltaY;
             x = xSpeed + x;
             y = ySpeed + y;
             
         } else {
             x = catchX;
             y = catchY;
         }
     //     x = x + ofDist(x,y,catchX, catchY)/(catchX - x);
//     y = y + ofDist(x,y,catchX, catchY)/(catchY - y);
     
//     x = x+2;
//     y = y+2;
//     x = 2 + catchX + (1-catchUpSpeedT)+x;
//    y = 2 + catchY + (1-catchUpSpeedT)+y;
     
//     x = catchX * .2 + .8*x;
//     y = catchY * .2 + .8*y;
   // x = random(0,2);

}
