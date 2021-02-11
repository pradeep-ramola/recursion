//recursion 
#include <iostream>
using namespace std;
int print(int n){
    if(n==1){
        cout<<"Your numbers are : "<<1<<" ";
        return 0;
    }
    print(n-1);
    cout<<n<<" ";
}
int main() {
     cout << "Enter number of natural no to be printed : ";
    int n;
    cin>>n;
    print(n);

    return 0;
}
