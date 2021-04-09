#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "movieHouse.h"
using namespace std;
void setMovieHouseData(struct MovieHouse* movieHouse){
    system("clear");
	cout<<"Enter Movie Name : ";
	cin.getline(movieHouse->movieName,100);
	cout<<"\nAdult Ticket Price : ";
	cin>>movieHouse->adultTicketPrice;
	cout<<"\nChild Ticket Price : ";
	cin>>movieHouse->childTicketPrice;
	cout<<"\nAdult Tickets sold : ";
	cin>>movieHouse->adultTicketsSold;
	cout<<"\nChild Tickets sold : ";
	cin>>movieHouse->childTicketsSold;
	cout<<"\nDonation Percentage (%) : ";
	cin>>movieHouse->donationPercentage;
}
void generateReport(struct MovieHouse movieHouse){
    
    system("clear");

	movieHouse.grossAmount=(movieHouse.adultTicketPrice*movieHouse.adultTicketsSold)+(movieHouse.childTicketPrice* movieHouse.childTicketsSold);
	movieHouse.donation=(movieHouse.grossAmount*movieHouse.donationPercentage)/100;
	movieHouse.netAmount=movieHouse.grossAmount-movieHouse.donation;
	movieHouse.totalTicketsSold=movieHouse.adultTicketsSold+movieHouse.childTicketsSold;

	for(int i=0;i<25;i++)
	cout<<"_*";

	cout<<endl<<endl<<setw(40)<<setfill('.')<<left<<"Movie Name: ";
	cout<<setw(11)<<setfill(' ')<<right<<movieHouse.movieName;

	cout<<endl<<setw(40)<<setfill('.')<<left<<"Number of Tickets Sold: ";
	cout<<setw(11)<<setfill(' ')<<right<<movieHouse.totalTicketsSold;

	cout<<endl<<setw(40)<<setfill('.')<<left<<"Gross Amount: ";
	cout<<'$'<<setw(10)<<setfill(' ')<<right<<fixed<<setprecision(2)<<movieHouse.grossAmount;

	cout<<endl<<setw(40)<<setfill('.')<<left<<"Percentage of Gross Amount Donated: ";
	cout<<'$'<<setw(10)<<setfill(' ')<<right<<movieHouse.donationPercentage<<"%";

	cout<<endl<<setw(40)<<setfill('.')<<left<<"Amount Donated: ";
	cout<<'$'<<setw(10)<<setfill(' ')<<right<<movieHouse.donation;

	cout<<endl<<endl<<setw(40)<<setfill('.')<<left<<"Net Sale: ";
	cout<<'$'<<setw(10)<<setfill(' ')<<right<<movieHouse.netAmount;

	cout<<endl<<endl;

	for(int i=0;i<25;i++)
		cout<<"_ ";
	cout<<endl;
	for(int i=0;i<25;i++)
		cout<<" *";
	cin>>movieHouse.movieName;
	system("clear");

}