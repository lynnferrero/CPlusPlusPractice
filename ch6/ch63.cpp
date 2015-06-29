//
//  main.cpp
//  ch63
//
//  Created by XINLIN JIANG on 15/6/25.
//  Copyright (c) 2015年 XINLIN JIANG. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void showmenu()
{
    cout<<"Please enter a c, p, t, or g: ";
}

void answer(string m)
{
    cout << "A maple is a "<<m<<endl;
}


int main()

{
    showmenu();
    char choice;
    
    
    do 
    {


        showmenu();
        cin>>choice;
    }while(choice!='c'&&choice!='p'&&choice!='t'&&choice!='g');

        switch (choice)
        {
        
            case 'c':answer("carnivore");
                break;
            case 'p':answer("pianist");
                break;
            case 't':answer("tree");
                break;
            case'g' :answer("game");
                break;
            default:showmenu();break;
                
        }
        
        

return 0;

}

    

