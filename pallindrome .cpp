#include <iostream>
using namespace std;

int main(){
    
    int num,temp=0,newnum;
    cout<<"Enter a number: ";
    cin>>num;

    while(num>0){
        temp=num%10;
        newnum=newnum*10+temp;
        num=num/10;
    }

    if (newnum==num)
    {
        cout<<"The number entered is a palindrome number";
    }
    
    
    
    
    return 0;
}