#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cout <<"enter the numerator"<<endl;
    cin>> a;
    cout <<"enter the denominator"<<endl;
    cin>> b;

    try{
        if(b==0){
            throw b;
        }
        else {
            cout<<"result="<<(a/b)<<endl;
        }
           
    } 
    catch(int x  ){
            cout<<"cant divide by zero"<<endl;
        }
    return 0;
}