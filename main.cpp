//
//  main.cpp
//  Financial 2
//
//  Created by Nikita Lisitsyn on 2016-06-23.
//  Copyright © 2016 Nikita Lisitsyn. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
   
    const int sizeFive = 5;
    
    int aInt1[sizeFive] ;
    
    int i = 0;
    
    aInt1[i++] = 1000;
    aInt1[i++] = 1001;
    aInt1[i++] = 1002;
    aInt1[i++] = 1003;
    aInt1[i++] = 1004;
    
    for(int iCount = 0 ; iCount < 5; iCount++ )
    {
        cout << "aInt1[" << iCount << "[ : " <<
        aInt1[iCount] << endl;
    }

    
    cout << endl << "aInt[5]: " << aInt1[sizeFive] << endl;
    
    int aInt2[] = { 2000, 2001, 2002, 2003 };
    cout  << endl << aInt2 << endl;
    
    for(int i =0 ; i < 4; i++)
    {
        cout << endl << aInt2[i] << endl;
    }
    return 0;
}
