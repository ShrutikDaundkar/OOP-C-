//1. C++ program that demonstrates polymorphism and inheritance 
// using a publication example. This program uses a base class
// Publication and two derived classes, Book and Magazine.
// Use title, price, and copies as common attributes and
//  saleCopy () as a common method. Including author,
//  orderCopies () in Book, and orderQty, currentIssue ()
//   and receiveIssue () in Magazine. Showcase runtime 
//   polymorphism with virtual functions.


#include<iostream>
#include<string>

using namespace std;

class Publication{
    protected:
    string title ;
    double price;
    int copies;

    public:

    void getData(){
        cout<<"enter the title\n";
        cin>> title;
        cout<< "enter the price\n";
        cin>> price;
        cout <<"enter the copies\n";
        cin>> copies;      
    }
    virtual void salecopy(){
        cout<<"total amount= \n" <<(price*copies)<<endl;
    }

    void display(){
        cout<<"\nTitle= "<<title<<endl;
        cout<<"\nPrice="<<price<<endl;
        cout<<"\nCopies ="<<copies<<endl;
    }


};

class Books : public Publication{
    private:
    string author;

    public:

    void getData(){
        Publication::getData();
        cout <<"enter the name of author\n";
        cin>> author;
    }

    void salecopy() override{
        cout<<"\ntotal amount of books"<<(price * copies)<<endl;

    }

    void display(){
        Publication::display();
        cout <<"Author = "<<author<<endl;

    }

    void ordercopy(){
        int order ;
        cout <<"\nenter the number of order "<<endl;
        cin>> order;
        copies+= order;
        cout<<"\nfinalize order "<<order<<endl;
    }
};

class Magzine : public Publication{
    private:
    int orderQty;
    string currentIssue;

    public :

    void getData(){
        Publication::getData();
        cout<<"\nenter the no of order quantity";
        cin>> orderQty;
        cout<<"\nenter the current issue";
        cin>>currentIssue;
    }

    void display(){
        Publication::display();
        cout<<"\norder quantity="<<orderQty;
        cout<<"\n current issue"<<currentIssue;

    }
    void salecopy() override{
        cout<<"\ntotal amount of magzine"<<(price *copies)<<endl;

    }

    void recieved_issue(){
        cout <<"\nlatest recieved issue"<<currentIssue<<endl;
        copies+=orderQty;
        cout <<"\nfinalized order of magzine"<<copies;
    }
};


int main(){
    Publication* p;

    Books b;
    Magzine m;

    cout <<"\nenter the book details"<<endl;
    b.getData();
    
    cout<<"\nenter the magzine detail"<<endl;
    m.getData();
    
    cout<<"\n -----book detail-----"<<endl;
    p=&b;
    p->display();
    p->salecopy();

    cout<<"\n -------Magzine detail------"<<endl;

    p->display();
    p->salecopy();
    
    cout<<"\n -----other method--------"<<endl;
    b.ordercopy();
    m.recieved_issue();

    return 0;
}