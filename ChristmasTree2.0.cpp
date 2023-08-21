#include <iostream>

using namespace std;
typedef unsigned int uint;

inline uint round(float f);
void upperTriangle(float upperTriangle_width, float upperTriangle_height);
void midTriangle(float midTriangle_width, float midTriangle_height);
void lowerTriangle(float lowerTriangle_width, float lowerTriangle_height);
void trunk(float trunk_width, float trunk_height);

int main()
{
	short programClose;
	float height = 0, width = 0;
	cout<<"Podaj wysokosc trojkata gornego:";
	cin>>height;
	cout<<"\nPodaj szerokosc trojkata gornego:";
	cin>>width;
	cout<<endl;
	
	upperTriangle(width, height);
	midTriangle(width, height);
	lowerTriangle(width, height);
	trunk(width, height);
	
	cout<<"Podaj jakas liczbe zeby zakonczyc:";
	cin>>programClose;
	return 0;
}

void upperTriangle(float upperTriangle_width, float upperTriangle_height)
{
		for(uint i = 1; i <= upperTriangle_height; i++)
	{
		for(uint j = 1; j <= upperTriangle_width - round(((i * upperTriangle_width)/upperTriangle_height)) + 2 * upperTriangle_width; j++) //Because the lower triangles are bigger I need to adjust
		{																																	//by making more spaces (I add the width again, twice)
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i * upperTriangle_width)/upperTriangle_height)); k++)
		{
			cout<<"*";
		}
		
		cout<<"*";
	
		for(uint j = 1; j <= round(((i * upperTriangle_width)/upperTriangle_height)); j++)
		{
			cout<<"*";
		}
		for(uint k = 1; k <= upperTriangle_width - round(((i * upperTriangle_width)/upperTriangle_height)) + 2 * upperTriangle_width; k++)
		{
			cout<<" ";
		}
	
		cout<<endl;
	}
}

void midTriangle(float midTriangle_width, float midTriangle_height)
{
		for(uint i = 1; i <= midTriangle_height * 2; i++) //The middle Triangle has 2 * height and 2 * width
	{
		for(uint j = 1; j <= 2 * midTriangle_width - round(((i * midTriangle_width)/midTriangle_height)) + midTriangle_width; j++) //Because the lower triangles are bigger I need to adjust
		{																															//by making more spaces (I add the width again, once)
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i * (midTriangle_width))/midTriangle_height)); k++)
		{
			cout<<"*";
		}
		
		cout<<"*";
	
		for(uint j = 1; j <= round(((i * (midTriangle_width))/midTriangle_height)); j++)
		{
			cout<<"*";
		}
		for(uint k = 1; k <= 2 *  midTriangle_width - round(((i * midTriangle_width)/midTriangle_height)) + midTriangle_width; k++)
		{
			cout<<" ";
		}
	
		cout<<endl;
	}
}

void lowerTriangle(float lowerTriangle_width, float lowerTriangle_height)
{
		for(uint i = 1; i <= lowerTriangle_height * 3; i++) // The lowest Triangle has 3 * height and 3 * width
	{
		for(uint j = 1; j <= 3 * lowerTriangle_width - round(((i * lowerTriangle_width)/lowerTriangle_height)); j++)
		{
			cout<<" ";
		}
		for(uint k = 1; k <= round(((i * lowerTriangle_width)/lowerTriangle_height)); k++)
		{
			cout<<"*";
		}
		
		cout<<"*";
	
		for(uint j = 1; j <= round(((i * lowerTriangle_width)/lowerTriangle_height)); j++)
		{
			cout<<"*";
		}
		for(uint k = 1; k <= 3 * lowerTriangle_width - round(((i * lowerTriangle_width)/lowerTriangle_height)); k++)
		{
			cout<<" ";
		}
	
		cout<<endl;
	}
}

void trunk(float trunk_width, float trunk_height)
{
	for(uint i = 1; i <= trunk_height; i++)
	{
		for(uint j = 1; j <= 3 * trunk_width - round(trunk_width / 2); j++)
		{
			cout<<" ";
		}
		
		for(uint k = 1; k <= round(trunk_width / 2); k++)
		{
			cout<<"#";
		}
		
		cout<<"#";
		
		for(uint j = 1; j <= round(trunk_width / 2); j++)
		{
			cout<<"#";
		}
		
		for(uint k = 1; k <= 3 * trunk_width - round(trunk_width / 2); k++)
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