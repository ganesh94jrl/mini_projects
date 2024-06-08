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
