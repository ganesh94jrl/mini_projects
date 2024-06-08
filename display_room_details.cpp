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
