#include <iostream>
#include <string>
using namespace std;

const int MAX_ROOMS = 10;

class Room {
public:
    int roomNumber;
    string guestName;
    bool isBooked;

    Room() {
        roomNumber = 0;
        guestName = "";
        isBooked = false;
    }
};

class Hotel {
private:
    Room rooms[MAX_ROOMS];

public:
    Hotel() {
        for (int i = 0; i < MAX_ROOMS; i++) {
            rooms[i].roomNumber = i + 1;
        }
    }

    void bookRoom() {
        int roomNumber;
        cout << "Enter room number to book (1-" << MAX_ROOMS << "): ";
        cin >> roomNumber;

        if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
            cout << "Invalid room number.\n";
            return;
        }

        if (rooms[roomNumber - 1].isBooked) {
            cout << "Room already booked.\n";
        } else {
            cout << "Enter guest name: ";
            cin.ignore(); // To consume the newline character left by cin
            getline(cin, rooms[roomNumber - 1].guestName);
            rooms[roomNumber - 1].isBooked = true;
            cout << "Room " << roomNumber << " successfully booked.\n";
        }
    }

    void checkAvailability() {
        cout << "Room availability:\n";
        for (int i = 0; i < MAX_ROOMS; i++) {
            if (!rooms[i].isBooked) {
                cout << "Room " << rooms[i].roomNumber << " is available.\n";
            } else {
                cout << "Room " << rooms[i].roomNumber << " is booked by " << rooms[i].guestName << ".\n";
            }
        }
    }

    void checkOut() {
        int roomNumber;
        cout << "Enter room number to check out (1-" << MAX_ROOMS << "): ";
        cin >> roomNumber;

        if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
            cout << "Invalid room number.\n";
            return;
        }

        if (!rooms[roomNumber - 1].isBooked) {
            cout << "Room is not booked.\n";
        } else {
            rooms[roomNumber - 1].guestName = "";
            rooms[roomNumber - 1].isBooked = false;
            cout << "Room " << roomNumber << " successfully checked out.\n";
        }
    }

    void displayRoomDetails() {
        int roomNumber;
        cout << "Enter room number to display details (1-" << MAX_ROOMS << "): ";
        cin >> roomNumber;

        if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
            cout << "Invalid room number.\n";
            return;
        }

        if (rooms[roomNumber - 1].isBooked) {
            cout << "Room " << roomNumber << " is booked by " << rooms[roomNumber - 1].guestName << ".\n";
        } else {
            cout << "Room " << roomNumber << " is available.\n";
        }
    }
};

int main() {
    Hotel hotel;
    int choice;

    do {
        cout << "\nHotel Management System\n";
        cout << "1. Book a room\n";
        cout << "2. Check room availability\n";
        cout << "3. Check out from room\n";
        cout << "4. Display room details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.bookRoom();
                break;
            case 2:
                hotel.checkAvailability();
                break;
            case 3:
                hotel.checkOut();
                break;
            case 4:
                hotel.displayRoomDetails();
                break;
            case 5:
                cout << "Exiting system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
