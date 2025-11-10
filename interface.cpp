#include<iostream>
using namespace std;

class Vehical{
    public:
    virtual void start()=0;
    virtual void stop()=0;

};

class Car : public Vehical{
    public :
    void start(){
        cout<<"Starting the car\n";
    }

    void stop (){
        cout<<"stoping the car\n";
    }
};

class Bike : public Vehical{
    public :
    void start(){
        cout<<"Starting the Bike\n";
    }

    void stop(){
        cout<<"Stoping the Bike\n ";
    }

};

int main(){
    Car c;
    Bike b;

    c.start();
    c.stop();

    b.start();
    b.stop();

}