/*
Problem Statement

An event management company wants to keep track of the participants attending their events. They need a 
program that allows them to input participant details and search for a specific participant based on 
their ID. Additionally, the program should keep track of the total number of participants registered.

You are tasked with implementing a program that uses the Event class to manage participant information. 
The class should have:

A static member variable totalParticipants to store the total number of participants.
A member function setParticipant to set the participant's ID (which should be unique) and name.
A member function getParticipantID to retrieve a participant's ID.
A member function display to print a participant's ID and name.
A static member function getTotalParticipants to return the total number of participants registered.
*/

#include <iostream>
#include <string>

using namespace std;

class Event {
private:
    static int totalParticipants;
    int participantID;
    string participantName;

public:
    void setParticipant(int ID, const string& name) {
        participantID = ID;
        participantName = name;
        totalParticipants++;
    }

    int getParticipantID() {
        return participantID;
    }

    void display() {
        cout << "Participant ID: " << participantID << ", Name: " << participantName << endl;
    }

    static int getTotalParticipants() {
        return totalParticipants;
    }
};

int Event::totalParticipants = 0;

int main() {
    int n;
    cin >> n;

    Event participants[n];

    for (int i = 0; i < n; i++) {
        int participantID;
        string participantName;

        cin >> participantID;
        cin.ignore();
        getline(cin, participantName);

        participants[i].setParticipant(participantID, participantName);
    }

    int searchID;
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (participants[i].getParticipantID() == searchID) {
            cout << "Participant found: ";
            participants[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Participant with ID " << searchID << " not found." << endl;
    }

    return 0;
}