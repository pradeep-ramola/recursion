 
//Fn = {[(√5 + 1)/2] ^ n} / √5  using this formula you can directly find nth term in  O(1)
//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main ()
{
	int n ;
	cout<<"Enter the term to find in fibonacci series : ";
	cin>>n;
 
	cout << fib(n);
 
	return 0;
}

 
