//recursion 
#include <iostream>
using namespace std;
int print(int n){
    cout<<n<<" ";

    if(n==1){
         return 0;
    }
    return print(n-1);
    
}
int main() {
     cout << "Enter number of natural no to be printed in reverse order : ";
    int n;
    cin>>n;
    print(n);

    return 0;
}
