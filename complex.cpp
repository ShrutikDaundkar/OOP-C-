#include<iostream>
using namespace std;

class Complex {
 int real ,imag;
 public :
 Complex (){
    real=0; 
    imag=0;
 }
 
 Complex(int i){
    real =i;
    imag =i;
 }

 Complex(int a ,int b){
    real = a;
    imag = b;
 }

 void add(Complex c1 ,Complex c2){
    real = c1.real + c2.real;
    imag = c2.imag + c2.imag;
    cout << "addition ="<<real <<"+"<<imag<<"i"<<endl;
 }
 void sub (Complex c1 , Complex c2){
    real = c1.real + c2.real;
    imag =c1.imag +c2.imag;
    cout << " subtraction ="<<real << "+"<< imag << "i"<<endl;
 }
 
};

int main(){
    int real ,imag;
    
    cout<< "enter the real and imaginary part of complex no "<<endl;
    cin >> real >> imag;
    Complex c1(real ,imag);
    cout << "enter the real and imaginary part of complex no "<<endl;
    cin >> real >> imag ;
    Complex c2(real ,imag);

    Complex c3;
    c3.add(c1,c2);
    c3.sub(c1,c2);

}