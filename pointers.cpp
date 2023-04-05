#include <iostream>
using namespace std;

int main(){
    int num=5;
    int *p=&num;
    cout<<"p --> "<<p<<endl;    //print address
    cout<<"*p --> "<<*p<<endl;   //print number
    cout<<"&p --> "<<&p<<endl;   //print address but different from p
    cout<<"&num --> "<<&num<<endl;   //print address
    cout<<"num --> "<<num<<endl<<endl;   //print number

    //Pointers in ARRAY
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"arr --> "<<arr<<endl;   //print address of 1st element(at index 0)
    cout<<"&arr[0] --> "<<&arr[0]<<endl;   //print address of 1st element(at index 0)
    cout<<"arr[0] --> "<<arr[0]<<endl;   //value at index 0
    cout<<"*arr --> "<<*arr<<endl;   //value at index 0
}