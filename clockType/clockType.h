//
//  clockType.h
//  clockType
//
//  Created by Isaac Delgado on 5/15/19.
//  Copyright © 2019 Isaac Delgado. All rights reserved.
//

#ifndef clockType_h
#define clockType_h

using namespace std;

class clockType {

private:
    int hr;     //stores the hours
    int min;    //stores the minutes
    int sec;    //stores the seconds
    
public:
    clockType();
    void printTime() const;
};

#endif /* clockType_h */
