#include "Address.h"

Address::Address()
{
    this->city="";
    this->country="";
    this->district="";
    this->pin=0;
    this->state="";
    this->street1="";
    this->street2="";
}

void Address::display(){
    cout<<"Address : \n\t"<<this->street1<<","<<endl<<"\t"<<this->street2<<","<<endl<<"\t"<<"City : " <<this->city<<endl<<"\t"<<"District : "<<this->district<<endl<<"\t"<<"Country : "<<this->country<<endl<<"\t"<<"Pin : "<<this->pin<<endl;
}
void Address::intializeAddress(){
    cout<<"Street1 :";
    getline(cin,this->street1);
    cout<<"Street2 :";
    getline(cin,this->street2);
    cout<<"City :";
    cin>>this->city;
    cout<<"District :";
    cin>>this->district;
    cout<<"Country :";
    cin>>this->country;
    cout<<"Pin :";
    cin>>this->pin;
}

