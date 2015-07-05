#include <iostream>
#include "ch94.h"
using namespace std;
namespace SALES
{

	
	void setSales (Sales & s, const double ar[], int n){
		int i = 0;
		while(i<4)
			s.sales[i++] = 0;
		//cout<<"s.sales[3]: "<<s.sales[3]<<endl;
		i = 0;
		//cout<<"n: "<<n<<endl;
		while(i<n){
			s.sales[i] = ar[i];
			i++;
		}
		//cout<<"s.sales[3]: "<<s.sales[3]<<endl;
		i = 0;

		double sum = 0;
		while(i<4){
			sum = sum + s.sales[i];
			i++;
		}
		s.average = sum/4;

		s.max = s.sales[0];
		s.min = s.sales[0];
		//cout<<"s.sales[3]: "<<s.sales[3]<<endl;
		for(int i = 0;i<4;i++){
			if(s.sales[i]>=s.max)
				s.max = s.sales[i];
			if(s.sales[i]<=s.min)
				s.min = s.sales[i];

		}

	}
	
	void setSales (Sales & s){
		
		
		cout <<"Enter sales numbers (no more than 4 numbers): ";
		cin>>s.sales[0]>>s.sales[1]>>s.sales[2]>>s.sales[3];
		s.average = (s.sales[0]+s.sales[1]+s.sales[2]+s.sales[3])/4.0;
		s.max = s.sales[0];
		s.min = s.sales[0];
		for(int i = 0;i<4;i++){
			if(s.sales[i]>=s.max)
				s.max = s.sales[i];
			if(s.sales[i]<=s.min)
				s.min = s.sales[i];

		}
		
		
		}
	void showSales(const Sales & s){

	cout<<"Sales: "<<endl;
	//int n;
	//n = sizeof(s.sales);
	for(int i = 0;i<4;i++)
		cout<<s.sales[i]<<" ";
		cout<<endl;
	cout<<"average: "<<s.average<<endl;
	cout<<"max: "<<s.max<<endl;
	cout<<"min: "<<s.min<<endl;

}
}