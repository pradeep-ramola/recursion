//recursion 
#include <iostream>
using namespace std;
int fact(int n){
 
    if(n==1||n==0){
         return 1;
    }
    return n*fact(n-1);
    
}
int main() {
     cout << "Enter number : ";
    int n;
    cin>>n;
    int k=fact(n);
    cout<<"Factorial is : "<<k;
    return 0;
}
