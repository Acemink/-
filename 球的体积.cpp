#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.1415927
int main()
{
	double r,v;
	cout<<"������r:";
	cin>>r;
	v=4.0/3*PI*r*r*r;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<"���Ϊ��"<<v<<endl; 
	return 0; 
}
