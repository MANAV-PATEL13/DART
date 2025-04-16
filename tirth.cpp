#include <iostream>
#include <string>
using namespace std;

const int MAX_MOVIES = 10;
const int MAX_BOOKINGS = 10;

class Movie {
private:
    int id;
    string title;
    string genre;
    float rating;
    int duration;

public:
    Movie() {}

    Movie(int _id, string _title, string _genre, float _rating, int _duration) {
        id = _id;
        title = _title;
        genre = _genre;
        rating = _rating;
        duration = _duration;
    }

    void displayInfo() const {
        cout << "ID: " << id << " | Title: " << title << " | Genre: " << genre
             << " | Rating: " << rating << " | Duration: " << duration << " mins" << endl;
    }
    int getID() const {
        return id;
    }
    string getTitle() const {
        return title;
    }
};

class MovieManager {
private:
    Movie movies[MAX_MOVIES];
    int movieCount;

public:
    MovieManager() {
        movieCount = 0;
    }

    void loadDummyData() {
        addMovie(1, "Fight Club", "Psychological Thriller", 8.8, 149);
        addMovie(2, "Superbad", "Comedy", 7.6, 113);
        addMovie(3, "James Bond", "Action", 7.8, 130);
    }

    void displayAllMovies() const {
        cout << "\n--- Available Movies ---" << endl;
        for (int i = 0; i < movieCount; i++) 
        {
            movies[i].displayInfo();
        }
    }

    bool addMovie(int id, string title, string genre, float rating, int duration) {
        if (movieCount >= MAX_MOVIES) {
            cout << "Movie list is full." << endl;
            return false;
        } 
        else {
            bool duplicate = false;
            for (int i = 0; i < movieCount; i++) {
                if (movies[i].getID() == id) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                cout << "Movie ID already exists." << endl;
                return false;
            } else {
                movies[movieCount++] = Movie(id, title, genre, rating, duration);
                return true;
            }
        }
    }

    const Movie* findMovieByID(int id) const {
        for (int i = 0; i < movieCount; i++) 
        {
            if (movies[i].getID() == id)
               return &movies[i];
        }
        return nullptr;
    }
};

class Customer {
private:
    struct Booking {
        int movieID;
        int tickets;
    } bookings[MAX_BOOKINGS];

    int bookingCount;

public:
    Customer(int _id, string _name, string _email) {
        bookingCount = 0;
    }

    void bookTicket(MovieManager& manager) {
        if (bookingCount >= MAX_BOOKINGS) {
            cout << "Maximum booking limit reached." << endl;
        } else {
            manager.displayAllMovies();
            int id, tickets;
            cout << "Enter Movie ID to book:" << endl;
            cin >> id;

            const Movie* movie = manager.findMovieByID(id);
            if (movie == nullptr) {
                cout << "Invalid Movie ID." << endl;
            } else {
                cout << "Enter number of tickets:" << endl;
                cin >> tickets;

                if (tickets <= 0) {
                    cout << "Invalid ticket count." << endl;
                } 
                else {
                    bool found = false;
                    for (int i = 0; i < bookingCount; i++) {
                        if (bookings[i].movieID == id) {
                            bookings[i].tickets += tickets;
                            found = true;
                            break;
                        }
                    }
                if (found==false) {
                    bookings[bookingCount++] = {id, tickets};
                }
                 cout << "Booked " << tickets << " ticket(s) for: " << movie->getTitle() << endl;
                }
            }
        }
    }

    void viewBookings(MovieManager& manager) {
        cout << "\n--- My Bookings ---" << endl;
        if (bookingCount == 0) {
            cout << "No bookings made yet." << endl;
        } else {
            for (int i = 0; i < bookingCount; i++) {
                const Movie* movie = manager.findMovieByID(bookings[i].movieID);
                if (movie) {
                    movie->displayInfo();
                    cout << "Tickets booked: " << bookings[i].tickets << endl;
                }
            }
        }
    }

    void showMenu(MovieManager& manager) {
        int choice;
        do {
            cout << "\n--- Customer Menu ---" << endl;
            cout << "1. Book Ticket" << endl;
            cout << "2. View Bookings" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter choice:" << endl;
            cin >> choice;

            if (choice == 1) {
                bookTicket(manager);
            } else if (choice == 2) {
                viewBookings(manager);
            } else if (choice == 3) {
                cout << "See you at the screens!" << endl;
            } else {
                cout << "Invalid option." << endl;
            }
        } while (choice != 3);
    }
};

class Admin {
public:
    Admin(int _id, string _name, string _email) {}

    void showMenu(MovieManager& manager) {
        int choice;
        do {
            cout << "\n--- Admin Menu ---" << endl;
            cout << "1. Add Movie" << endl;
            cout << "2. View All Movies" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter choice:" << endl;
            cin >> choice;

            if (choice == 1) {
                int id, duration;
                float rating;
                string title, genre;

                cout << "Enter ID:" << endl;
                cin >> id;
                cin.ignore();

                cout << "Enter Title:" << endl;
                getline(cin, title);

                cout << "Enter Genre:" << endl;
                getline(cin, genre);

                cout << "Enter Rating:" << endl;
                cin >> rating;

                cout << "Enter Duration:" << endl;
                cin >> duration;

                bool added = manager.addMovie(id, title, genre, rating, duration);
                if (added) {
                    cout << "Movie added!" << endl;
                }
            } else if (choice == 2) {
                manager.displayAllMovies();
            } else if (choice == 3) {
                cout << "Goodbye!" << endl;
            } else {
                cout << "Invalid option." << endl;
            }
        } while (choice != 3);
    }
};

int main() {
    MovieManager manager;
    manager.loadDummyData();

    cout << "--- Movie Booking System ---" << endl;
    cout << "1. Customer" << endl;
    cout << "2. Admin" << endl;
    cout << "Choose user type:" << endl;
    int type;
    cin >> type;

    if (type == 1) {
        Customer customer(1, "John Doe", "john@example.com");
        customer.showMenu(manager);
    } else if (type == 2) {
        Admin admin(99, "Admin", "admin@example.com");
        admin.showMenu(manager);
    } else {
        cout << "Invalid user type." << endl;
    }

    return 0;
}