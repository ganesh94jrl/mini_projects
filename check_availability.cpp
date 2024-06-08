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
