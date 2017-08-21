#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	double n,v1,v2;
	cin>>t;
	while(t)
	{
		cin>>n>>v1>>v2;
		if(n*sqrt(2)/v1>2*n/v2)
		{
			printf("Elevator\n");
		}
		else
			printf("Stairs\n");
		t--;
	}
}