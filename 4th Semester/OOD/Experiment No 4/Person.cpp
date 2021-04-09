#include "Person.h"

Person::Person(){}
Person::Person(string name,Address address,string email,string mobile,Date birthdate){
    this->name=name;
    this->address=address;
    this->email=email;
    this->mobile=mobile;
    this->birthdate=birthdate;
}

void Person::acceptPersonDetails(){
    cout<<"EnterName :";
    getline(cin,this->name);
    cout<<"Address:";
    this->address.intializeAddress();
    cout<<"Email :";
    cin>>this->email;
    cout<<"Mobile No :";
    cin>>this->mobile;
    cout<<"Birtdate :";
    this->birthdate.setDate();
}

void Person::displayPersonDetails(){
    cout<<"\nPerson Details :";
    cout<<"\nName :"<<this->name<<endl;
    this->address.display();
    cout<<"\nEmail :"<<this->email;
    cout<<"\nMobile :"<<this->mobile;
    cout<<"\nBirthdate :";
    this->birthdate.printDate();
}
