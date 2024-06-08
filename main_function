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
