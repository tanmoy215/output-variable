#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"enter r : ";
    cin>>r;
    float ref = 2*3.142*r;
    float area = 3.142*(r*r);
    if(ref<area){
        cout<<"numerically area of this circle is larger than the circumference";
    }
    else{
        cout<<"numerically area of this circle is not larger than the circumference";
    }
    return 0;
}