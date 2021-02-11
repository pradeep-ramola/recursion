#include <iostream>
using namespace std;
int gcd(int a, int b)
{  
	if (b == 0)
		return a;
	int rem=a % b;
	if(rem==0) return b;
	else return gcd(b, rem); 
	
}

int main()
{
	int a , b ;
	cout<<"Enter the two no to find their gcd : ";
	cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}
