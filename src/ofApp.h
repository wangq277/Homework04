#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "rectangle.h"
#include "Ball.hpp"
#include "triangle.hpp"


class ofApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();
        void mouseMoved(int x, int y );
    
        rectangle myRectangle;
        Ball myBall;
        triangle myTriangle;

};

#endif
