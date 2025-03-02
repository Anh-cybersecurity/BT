#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  
    int target = rand() % 100 + 1;  
    int guess, attempts = 0;

    while (true) {
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Qua lon";
        } else if (guess < target) {
            cout << "Qua nho ";
        } else {
            cout << "Chinh xac. Da doan dung sau " << attempts << " lan.\n";
            break;
        }
    }

    cout << "Diem cua ban: " << 10000 - 2*attempts << endl;

    return 0;
}