#include <iostream>
#include <queue>
using namespace std;

#define M 10

class Box
{
public:
	int height;
	int	width;
	int depth;
public:
	Box()//constructorul fara paramentri
	{
		height = 0;
		width = 0;
		depth = 0;
	}
public:
	Box(int h, int w, int d) //constructorul cu paramentri
	{
		height = h;
		width = w;
		depth = d;
	}
public: void //functia de citire a datelor
	Read(){
		cout << "\n\t---Introduceti datele---" << endl;
		cout << "\tInaltimea:";
		cin >> height;
		cout << "\tLatimea:" ;
		cin >> width;
		cout << "\tAdincimea:" ;
		cin >> depth;
	}
public: void // functia de afisare a datelor
	Display() {
		cout << "\n\t---Afisarea datele---" << endl;
		cout << "\tInaltimea:" << height <<endl;
		cout << "\tLatimea:" << width << endl;
		cout << "\tAdincimea:" << depth << endl;
	}
public: int Volum_Box() {
	return height * width * depth;
}
public: int Aria_Box() {
	return 2*(height*width + height*depth+width*depth);
}
};

int main() {
	Box b;
	int n;//numarul de cutii
	cout << "\n\tIntroduceti numarul de elemente:";
	cin >> n;// numarul de elemete
	for (int i = 0; i < n; i++)//ciclu de citire/afisare a nr elemente de le tasta
	{
		b.Read();
		b.Display();
		cout << "\n\tVolumul cutiei: "<<b.Volum_Box();
		cout << "\n\tAria cutiei: " << b.Aria_Box()<<endl;
	}
}
