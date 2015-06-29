//
//  main.cpp
//  ch62
//
//  Created by XINLIN JIANG on 15/6/25.
//  Copyright (c) 2015年 XINLIN JIANG. All rights reserved.
//
//
//  ch62.cpp
//  cpp
//
//  Created by XINLIN JIANG on 15/6/25.
//  Copyright (c) 2015年 XINLIN JIANG. All rights reserved.
//

#include <iostream>

const int Max = 10;

int main()
{
    
    using namespace std;
    
    double donation[Max];
    cout<< "Please enter the amount of your donation.\n";
    cout << "You may enter up tp " <<Max <<" donation <q to terminate>.\n";
    
    cout << "donation #1: ";
    int i = 0;
    while (i < Max && cin >> donation[i]) {
        
        if(++i<Max)
            cout<< "donation #" << i+1<<": ";
        
    }
    
    
    double total = 0.0;
    double ave = 0.0;
    for (int j=0; j<i; j++)
        total+=donation[j];
    ave = total/i;
    
    int m=0;
    for (int k=0;k<i;k++)
        if(donation[k]>ave)
            m++;
    cout << "average of "<<i<<"donations is "<<ave<<".\n";
    cout <<m<<" of them are greater than average.\n";
    
    return 0;
    
    
}