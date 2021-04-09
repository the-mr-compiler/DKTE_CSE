#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string movieName;
	float adultTicketPrice, childTicketPrice, grossAmount, donationPercentage, netAmount, donation;
	int adultTicketsSold, childTicketsSold, totalTicketsSold;
	cout << "Enter Movie Name : ";
	getline(cin, movieName);
	cout << "\nAdult Ticket Price : ";
	cin >> adultTicketPrice;
	cout << "\nChild Ticket Price : ";
	cin >> childTicketPrice;
	cout << "\nAdult Tickets sold : ";
	cin >> adultTicketsSold;
	cout << "\nChild Tickets sold : ";
	cin >> childTicketsSold;
	cout << "\nDonation Percentage (%) : ";
	cin >> donationPercentage;

	grossAmount = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
	donation = (grossAmount * donationPercentage) / 100;
	netAmount = grossAmount - donation;
	totalTicketsSold = adultTicketsSold + childTicketsSold;

	for (int i = 0; i < 30; i++)
		cout << "_*";

	cout << endl
		 << endl
		 << setw(40) << setfill('.') << left << "Movie Name: ";
	cout << setw(11) << setfill(' ') << right << movieName;

	cout << endl
		 << setw(40) << setfill('.') << left << "Number of Tickets Sold: ";
	cout << setw(11) << setfill(' ') << right << totalTicketsSold;

	cout << endl
		 << setw(40) << setfill('.') << left << "Gross Amount: ";
	cout << '$' << setw(10) << setfill(' ') << right << fixed << setprecision(2) << grossAmount;

	cout << endl
		 << setw(40) << setfill('.') << left << "Percentage of Gross Amount Donated: ";
	cout << '$' << setw(10) << setfill(' ') << right << donationPercentage << "%";

	cout << endl
		 << setw(40) << setfill('.') << left << "Amount Donated: ";
	cout << '$' << setw(10) << setfill(' ') << right << donation;

	cout << endl
		 << endl
		 << setw(40) << setfill('.') << left << "Net Sale: ";
	cout << '$' << setw(10) << setfill(' ') << right << netAmount;

	cout << endl
		 << endl;
}
