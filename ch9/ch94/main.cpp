#include <iostream>
#include "ch94.h"

using namespace std;

int main(){
	using SALES::Sales;
	using SALES::setSales;
	using SALES::showSales;

	Sales mimi;
	
	setSales(mimi);
	showSales(mimi);
	Sales jiji;
	double array[] = {8,7,6};
	int n = sizeof(array)/8;
	setSales(jiji,array,n);
	showSales(jiji);
	return 0;
}