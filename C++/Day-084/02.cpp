/*
Problem Statement



Design a ticket booking system that handles both concert tickets and movie tickets. Implement the system using the concept of multiple inheritance. The system should allow the user to input the details of a concert ticket and a movie ticket, and display the booking details.



Define a base class Ticket and two derived classes ConcertTicket and MovieTicket. The Ticket class stores the details of an event and its price, while the derived classes ConcertTicket and MovieTicket inherit from Ticket and provide specific implementations for their respective events.



Define a class Booking, which inherits from both ConcertTicket and MovieTicket. The Booking class represents a booking that includes both a concert ticket and a movie ticket. It stores the details of both events and provides a function displayBookingDetails to display the booking details.

Input format :
The first line of input consists of a string that represents the name of the concert event.

The second line of input consists of an integer that represents the price of the concert ticket.

The third line of input consists of a string that represents the name of the movie.

The fourth line of input consists of an integer that represents the price of the movie ticket.

Output format :
The output should display the booking details as follows:

The concert details, including the event name and ticket price.

The movie details include the event name and ticket price.



Refer to the sample output for formatting specifications.

Code constraints :
The concert name and movie name should not exceed 100 characters.

The ticket prices should be positive integers.

Sample test cases :
Input 1 :
Pop Music Concert
50
Romantic Comedy
15
Output 1 :
Concert Details: 
Event: Pop Music Concert
Price: $50

Movie Details: 
Event: Romantic Comedy
Price: $15
Input 2 :
Classical Symphony
60
Action Thriller
20
Output 2 :
Concert Details: 
Event: Classical Symphony
Price: $60

Movie Details: 
Event: Action Thriller
Price: $20
*/

#include <iostream>
#include <string>
using namespace std;

// Base class Ticket
class Ticket {
protected:
    string event;
    int price;

public:
    Ticket(string e, int p) : event(e), price(p) {}
};

// Derived class ConcertTicket
class ConcertTicket : public Ticket {
public:
    ConcertTicket(string e, int p) : Ticket(e, p) {}

    void displayConcertDetails() {
        cout << "Concert Details:" << endl;
        cout << "Event: " << event << endl;
        cout << "Price: $" << price << "\n" << endl;
    }
};

// Derived class MovieTicket
class MovieTicket : public Ticket {
public:
    MovieTicket(string e, int p) : Ticket(e, p) {}

    void displayMovieDetails() {
        cout << "Movie Details:" << endl;
        cout << "Event: " << event << endl;
        cout << "Price: $" << price << endl;
    }
};

// Booking class inheriting from both ConcertTicket and MovieTicket
class Booking : public ConcertTicket, public MovieTicket {
public:
    Booking(string concertEvent, int concertPrice, string movieEvent, int moviePrice)
        : ConcertTicket(concertEvent, concertPrice), MovieTicket(movieEvent, moviePrice) {}

    void displayBookingDetails() {
        displayConcertDetails();
        displayMovieDetails();
    }
};

int main() {
    string concertEvent, movieEvent;
    int concertPrice, moviePrice;

    getline(cin, concertEvent);
    cin >> concertPrice;
    cin.ignore();
    getline(cin, movieEvent);
    cin >> moviePrice;

    Booking booking(concertEvent, concertPrice, movieEvent, moviePrice);
    booking.displayBookingDetails();

    return 0;
}
