#include <iostream>
int main()
{
	using namespace std;
	int l,m;
	cin >> l;
	cin >> m;
	int sum=0;
	for (int i = l;i<=m; i++){

		sum = sum + i;
	}
	cout << "sum is : "<<sum<<endl;
	return 0;
}