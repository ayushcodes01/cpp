#include<iostream>
using namespace std;
void greet(){
    cout<<"gud morng"<<endl;
    greet();
}
int main (){
    greet();
}