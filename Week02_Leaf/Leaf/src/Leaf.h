//
//  Leaf.h
//  Leaf
//
//  Created by Ray_Hung on 9/10/15.
//
//

#ifndef __Leaf__Leaf__
#define __Leaf__Leaf__

#include "ofMain.h"

class Leaf {
    
public:
    void setup();
    void update();
    void draw();
    
private:
    //LEAF VARIABLES
    float xPos, yPos;
    
    float leafWidth, leafHeight;
    float stemWidth, stemHeight;
    
    float fruitXPosOne, fruitYPosOne, fruitXPosTwo, fruitYPosTwo;
    float fruitRadiusOne, fruitRadiusTwo;
    
    ofColor leafColorLeft, leafColorRight, stemColor, fruitColorOne, fruitColorTwo;
    
    float rotation;
    
    float scaleFactor;
    
};

#endif /* defined(__Leaf__Leaf__) */
