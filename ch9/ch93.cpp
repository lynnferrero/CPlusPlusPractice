#include <iostream>
#include <new>
#include <cstring>
using namespace std;
const int BUF = 512;
const int N = 2;
struct chaff
{
	char dross[20];
	int slag;
};

char buffer[BUF];
//char buffer2[500];


//chaff set[2];//new layout cache
//strcpy();
//show;

int main()
{
	chaff *p1, *p2;
	int *p3, *p4;
	cout << "Calling new and placement new:\n";
	p1 = new chaff[N];
	p2 = new (buffer) chaff[N];
	//cout << "Buffer address:\n"<<" char buffer[BUF]"<<&buffer<<endl;

	for(int i = 0; i<N;i++)
	{
		cout<<"Enter dross: ";
		cin.get(p1[i].dross,20);
		cout<<"Enter slag: ";
		cin>>p1[i].slag;
		p2[i].slag = p1[i].slag;
		strcpy(p2[i].dross,p1[i].dross);
		cin.get();
	}
	cout << "Buffer addresses:\n"<<" heap: "<<p1<<" static: "<< (void *) buffer<<endl;
	cout << "Buffer contents:\n";
	for (int i = 0;i<N;i++)
	{
		cout << p1[i].dross<<" at "<<&p1[i].dross<<"; ";
		cout << p1[i].slag<< " at "<<&p1[i].slag<<endl;

		cout << p2[i].dross<<" at "<<&p2[i].dross<<"; ";
		cout << p2[i].slag <<" at "<<&p2[i].slag<<endl;
	}
	//cout << "\nCalling new and placcement new a second time:\n";
	 delete [] p1;
	// delete [] p2;
	 return 0;
}
