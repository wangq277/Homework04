//
//  Ball.hpp
//  rectangleZeno
//
//  Created by Qihui Wang on 2/17/17.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <ofMain.h>

class Ball {
    
public: // place public functions or variables declarations here
    
   
    void draw();    // draw method, this where you'll do the object's drawing
    
    // variables
    float x;        // position
    float y;
    float dist;
    
    
    void	zenoToPoint(float catchX, float catchY);
    float	catchUpSpeedC;
    int dim;        // size
    ofColor color;  // color using ofColor type
    //   ofFbo fbo;
    Ball();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value

};

#endif /* Ball_hpp */
