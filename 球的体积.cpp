#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.1415927
int main()
{
	double r,v;
	cout<<"请输入r:";
	cin>>r;
	v=4.0/3*PI*r*r*r;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<"体积为："<<v<<endl; 
	return 0; 
}
