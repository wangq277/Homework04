#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){
	catchUpSpeed = 0.12f;
    
}

//Ball :: Ball(){
//    catchUpSpeed = 0.3f;
//}

//------------------------------------------------------------------
void rectangle::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(150,206,180);
    ofRect(pos.x, pos.y, 20,20);
    
}

//------------------------------------------------------------------

void rectangle::zenoToPoint(float catchX, float catchY){
	
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y; 

}




//void Ball::draw() {
//    
//    //ofFill();
//    //ofSetRectMode(OF_RECTMODE_CENTER);
//    ofSetColor(156, 20, 20);
//    ofCircle(Pos1.x, Pos1.y, 10);
//
//}
//
//void Ball :: cZenoToPoint(float catchX, float catchY){
//    Pos1.x = cCatchUpSpeed * catchX + (1-cCatchUpSpeed) * Pos1.x;
//    Pos1.y = cCatchUpSpeed * catchY + (1-cCatchUpSpeed) * Pos1.y;
//    
//}
