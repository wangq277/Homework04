//
//  triangle.hpp
//  rectangleZeno
//
//  Created by Qihui Wang on 2/17/17.
//
//

#ifndef triangle_hpp
#define triangle_hpp
//#pragma once
#include <ofMain.h>

class triangle {

public:
    
     triangle();
    void draw();    // draw method, this where you'll do the object's drawing
   // void update();
    //void init(ofPoint _pos, ofPoint _velocity);
  
    // variables
    float x;        // position
    float y;
//    ofVec2f pos;
//    ofVec2f velocity;
//    
    
    void	zenoToPoint(float catchX, float catchY);
    float	catchUpSpeedT;
    
    ofColor color;  // color using ofColor type
    float speedPerframe;
    float deltaX;
    float deltaY;
    float dist;
    float ratio;
    float xSpeed;
    float ySpeed;

};



#endif /* triangle_hpp */
