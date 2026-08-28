#include <iostream>  // For cin and cout
#include <limits>    // For numeric_limits

using namespace std;

int main() {
    int age;
    string name;

    // Prompt for name
    cout << "Enter your name: ";
    getline(cin, name); // Reads full line including spaces

    // Prompt for age with validation
    cout << "Enter your age: ";
    while (true) {
        cin >> age;

        // Check if input is valid
        if (cin.fail() || age < 0) {
            cout << "Invalid input. Please enter a valid non-negative integer for age: ";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } else {
            break; // Valid input
        }
    }

    // Output the collected data
    cout << "\nHello, " << name << "! You are " << age << " years old.\n";

    return 0;
}
