/*
Problem Statement

Seema is building a ticket reservation system and she wants to reserve tickets and cancel for a 
particular id. She created two classes: Ticket and Reservation. Each Ticket has a private 
attribute ticketId, and each Reservation has a private attribute reservedTickets (an array of 
tickets). The Reservation class contains a friend function cancelReservation(Reservation&, 
const Ticket&) that allows a ticket to be canceled from a reservation. 

Implement the classes and the cancelReservation function and write a program to manage ticket reservations.

*/

#include <iostream>
#define MAX_TICKETS 25
using namespace std;

class Ticket {
private:
    int ticketId;

public:
    Ticket(int id) : ticketId(id) {}

    int getTicketId() const {
        return ticketId;
    }
};

class Reservation {
private:
    Ticket* reservedTickets[MAX_TICKETS];
    int numTickets;

public:
    Reservation() : numTickets(0) {
        for (int i = 0; i < MAX_TICKETS; i++) {
            reservedTickets[i] = nullptr;
        }
    }

    void addTicket(const Ticket& ticket) {
        if (numTickets < MAX_TICKETS) {
            reservedTickets[numTickets] = new Ticket(ticket.getTicketId());
            numTickets++;
        }
    }

    void displayReservedTickets() const {
        cout << "Reserved Tickets: ";
        for (int i = 0; i < numTickets; i++) {
            cout << reservedTickets[i]->getTicketId() << " ";
        }
        cout << endl;
    }

    friend void cancelReservation(Reservation& reservation, const Ticket& ticket);
};

void cancelReservation(Reservation& reservation, const Ticket& ticket) {
    for (int i = 0; i < reservation.numTickets; i++) {
        if (reservation.reservedTickets[i]->getTicketId() == ticket.getTicketId()) {
            delete reservation.reservedTickets[i];
            reservation.reservedTickets[i] = nullptr;

            // Shift remaining tickets to fill the empty space
            for (int j = i; j < reservation.numTickets - 1; j++) {
                reservation.reservedTickets[j] = reservation.reservedTickets[j + 1];
            }
            reservation.reservedTickets[reservation.numTickets - 1] = nullptr;
            reservation.numTickets--;

            cout << "Ticket with ID " << ticket.getTicketId() << " has been canceled.";
            return;
        }
    }
    cout << "Ticket with ID " << ticket.getTicketId() << " not found in the reservation.";
}

int main() {
    Reservation reservation;
    int numTickets;

    cin >> numTickets;

    for (int i = 0; i < numTickets; i++) {
        int ticketId;
        cin >> ticketId;
        reservation.addTicket(Ticket(ticketId));
    }

    reservation.displayReservedTickets();

    int cancelTicketId;
    cin >> cancelTicketId;
    cancelReservation(reservation, Ticket(cancelTicketId));

    cout << endl;
    reservation.displayReservedTickets();

    return 0;
}