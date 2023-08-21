#include <iostream>

using namespace std;
typedef unsigned int uint;

inline uint round(float f);
void upperTriangle(float upperTriangle_width, float upperTriangle_height);
void midTriangle(float midTriangle_width, float midTriangle_height);
void lowerTriangle(float lowerTriangle_width, float lowerTriangle_height);

int main()
{
	short programClose;
	float width = 3, height = 3; // With height 6 and width 3 gets into an infinite loop
	cout<<"Podaj szerokosc trojkata gornego:";
	cin>>width;
	cout<<"\nPodaj wysokosc trojkata gornego:";
	cin>>height;
	cout<<endl;
	
	upperTriangle(width, height);
	midTriangle(width, height);
	lowerTriangle(width, height);
	
	cout<<"Podaj jakas liczbe zeby zakonczyc:";
	cin>>programClose;
	return 0;
}

void upperTriangle(float upperTriangle_width, float upperTriangle_height)
{
	for(uint i = 1; i <= upperTriangle_height ; i++)
	{
		for(uint j = 1; j <= upperTriangle_width - round(((i*upperTriangle_width)/upperTriangle_height)) + round((95 * upperTriangle_width)/54); j++) // 95/54 = 1/3(h * 5/3 *5/3)
		{
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i*upperTriangle_width)/upperTriangle_height)); k++)
		{
			cout<<"#";
		}
		
		cout<<"#";
		
		for(uint j = 1; j <= round(((i*upperTriangle_width)/upperTriangle_height)); j++)
		{
			cout<<"#";
		}
		for(uint k = 1; k <= upperTriangle_width - round(((i*upperTriangle_width)/upperTriangle_height)) + round((95 * upperTriangle_width)/54); k++)
		{
			cout<<" ";
		}
		
		cout<<endl;
	}
}

void midTriangle(float midTriangle_width, float midTriangle_height)
{
	for(uint i = 1; i <= round((midTriangle_height * 5)/3); i++)
	{
		for(uint j = 1; j <= round((midTriangle_width * 5)/3) - round(((i*midTriangle_width)/midTriangle_height)) + round((25 * midTriangle_width)/27); j++)
		{
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i*midTriangle_width)/midTriangle_height)); k++)
		{
			cout<<"#";
		}
		
		cout<<"#";
		
		for(uint j = 1; j <= round(((i*midTriangle_width)/midTriangle_height)); j++)
		{
			cout<<"#";
		}
		for(uint k = 1; k <= ((midTriangle_width * 5)/3) - round(((i*midTriangle_width)/midTriangle_height)) + round((25 * midTriangle_width)/27); k++)
		{
			cout<<" ";
		}
		
		cout<<endl;
	}
}

void lowerTriangle(float lowerTriangle_width, float lowerTriangle_height)
{
	for(uint i = 1; i <= round((lowerTriangle_height * 25/9)); i++)
	{/*
		for(uint j = 1; j <= round((lowerTriangle_width * 25)/9) - round(((i*lowerTriangle_width)/lowerTriangle_height)); j++)
		{
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i*lowerTriangle_width)/lowerTriangle_height)); k++)
		{
			cout<<"#";
		}
		*/
		cout<<"#";
		
		for(uint j = 1; j <= round(((i*lowerTriangle_width)/lowerTriangle_height)); j++)
		{
			cout<<"#";
		}
		for(uint k = 1; k <= round((lowerTriangle_width * 25)/9) - round(((i*lowerTriangle_width)/lowerTriangle_height)); k++)
		{
			cout<<" ";
		}
		
		cout<<endl;
	}
}

uint round(float f)
{
	return uint (f + 0.5);
}