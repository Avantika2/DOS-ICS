#include<bits/stdc++.h>
using namespace std;
int power(int a, int b, int mod);
int power(int a, int b, int mod)
{
	long long int t;
	if(b==0)
	{
		return a;
	}
	t = power(a,b/2,mod);
	if(b%2==0)
	{
		return ((t*t)%mod);
		
	}
	else
	{
		return (((t*t)%mod)*a)%mod;
	}
}
int main()
{
	int n,g,x,a,b,y;
	cout<<"Enter the value of n and g : ";
	cin>>n>>g;
	cout<<"\nEnter the value of x for the first person : ";
	cin>>x;
	a = power(g,x,n);
	cout<<"\nEnter the value of y for the seconf person : ";
	cin>>y;
	b = power(g,y,n);
	cout<<"\nThe key value for the first person is :";
	cout<<power(b,x,n);
	cout<<"\nThe the key value for the second person is : ";
	cout<<power(a,y,n);
}
