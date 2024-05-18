#include<iostream>
using namespace std;
void print(int x, int n){ 
    if(x>n) return; //base case
    print(x+1,n); //call
    cout<<x<<endl; //work
    
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(1,n);
}