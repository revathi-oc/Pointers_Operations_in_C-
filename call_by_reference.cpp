//REVATHI OC
//23070123105
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp=a;
    a=b;
    b=temp;
    cout<<"Inside SwapByReference: a= "<<a<<", b= "<<b<<endl;
}

int main() {
    int x=10,y=20;
    cout<<"2.Call by reference for swapping"<<endl;
    cout<<"Before SwapByReference: x= "<<x<<", y= "<<y<<endl;
    swap(x, y);
    cout<<"After SwapByReference: x= "<<x<<", y= "<<y<<endl;
    return 0;
}
