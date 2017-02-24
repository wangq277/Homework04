//
//  Ball.cpp
//  rectangleZeno
//
//  Created by Qihui Wang on 2/17/17.
//
//

#include "Ball.hpp"
#include "rectangle.h"

Ball :: Ball(){
    catchUpSpeedC = 0.04f;
    
    //ofClear(149,159,149);

}

void Ball :: draw(){
    
    
        ofSetColor(255, 111, 105);
        ofDrawCircle(x, y, 10);
}

void Ball :: zenoToPoint(float catchX, float catchY){
    
     dist = ofDist(x,y,catchX, catchY);
    
    if(dist > 150){

        x = catchX;
        y = catchY;

        //        x = catchUpSpeedC* catchX + (1-catchUpSpeedC)*x;
//        y = catchUpSpeedC*catchY + (1-catchUpSpeedC)*y;
    }else{
        x = catchUpSpeedC * catchX + (1-catchUpSpeedC) * x;
        y = catchUpSpeedC * catchY + (1-catchUpSpeedC) * y;

    }

    
    
    
//    x = catchUpSpeedC * catchX + (1-catchUpSpeedC) * x;
//    y = catchUpSpeedC * catchY + (1-catchUpSpeedC) * y;
    
}
