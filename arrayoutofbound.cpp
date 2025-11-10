#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int index;

    cout<<"enter the index";
    cin>> index;

    try{
        if(index<0||index>5){
            throw "array out of bound";
        }
        else{
            cout <<"number at the index"<<index<<"="<< arr[index]<<endl;
        }
    }

    catch(const char* msg){
        cout<<"exception:-"<<msg<<endl;
    }
}