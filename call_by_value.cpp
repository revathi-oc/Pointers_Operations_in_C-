//REVATHI OC
//23070123105
#include <iostream>
using namespace std;
void SwapByValue(int a, int b) {
    int temp=a;
    a=b;
    b=temp;
    cout<<"Inside SwapByValue function: a= "<<a<<", b= "<<b<<endl;
}

int main() {
    int x = 10, y = 20;
    cout<<"1.Call by value for swapping"<<endl;
    cout<<"Before SwapByValue: x= "<<x<<", y= "<<y<<endl;
    SwapByValue(x, y); 
    cout<<"After SwapByValue: x= "<<x<<", y= "<<y<<endl;
    return 0;
}
