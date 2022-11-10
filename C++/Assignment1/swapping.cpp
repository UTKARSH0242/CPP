#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int x=2,y=5;
    int temp;
    cout<<"before swapping";

    cout<<x<<y<<endl;
     temp = y;
     y = x;
     x = temp;
     cout<<"After swapping";
     cout<<x<<y<<endl;
 
    return 0;
}