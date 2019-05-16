//
//  clockTypeDef.cpp
//  clockType
//
//  Created by Isaac Delgado on 5/15/19.
//  Copyright © 2019 Isaac Delgado. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "clockType.h"

using namespace std;

clockType::clockType(){
    hr = 0;
    min = 0;
    sec = 0;
}

void clockType::printTime() const{
    if(hr < 10)
        cout << "0";
    cout << hr << ":";
    
    if(min < 10)
        cout << "0";
    cout << min << ":";
    
    if(sec < 10)
        cout << "0";
    cout << sec;
}
