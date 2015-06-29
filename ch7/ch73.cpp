#include <iostream>
#include <cmath>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box (const box * pda);
void cal_volume (box * pda);

int main()
{

	using namespace std;
	
	box place;

	cout << "Enter the height, width and length: ";
	while (cin >> place.height >> place.width >> place.length )
	{
		cal_volume ( &place);
		show_box (&place);
		cout << "Next three numbers (q to quit): ";

	}
	cout << "Done.\n";
	return 0;
}

void show_box( const box * pda)
{

	using namespace std;

	cout << "height = " << pda->height;
	cout << ", width = " << pda->width;
	cout << ", length = " << pda->length;
	cout << ", volume = "<< pda->volume<<endl;


}

void cal_volume( box * pda){

	using namespace std;
	pda->volume = pda->width * pda->length * pda->height;

}