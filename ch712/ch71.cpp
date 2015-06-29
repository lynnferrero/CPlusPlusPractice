#include <iostream>
#include <string.h>

float average(float x, float y){

	float avem;
	avem = 2.0*x*y/(x+y);
	return avem;
}

int main()
{
	using namespace std;


  
    cout<<"Enter two numbers:"<<endl;

    float x,y;
    cin>>x;
    cin>>y;

    while(x!=0&&y!=0)
	{
		float ave;
		ave = average(x,y);
		cout << "Average is: "<<ave<<endl;
		cin>>x;
		cin>>y;
	}
	return 0;
}