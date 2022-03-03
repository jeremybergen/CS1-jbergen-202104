#include <iostream>
#include <string>

using namespace std;

// enum Suit {Diamonds, Hearts, Clubs, Spades};
enum Suit {Spades = 40, Diamonds = 30, Hearts = 20, Clubs = 10};

int main() {
    Suit myCard = Suit::Clubs;

    // cout << "Your card is: "
    //      << myCard << endl;
    switch(myCard) {
        case 40:
            cout << "You chose Spades" << endl;
            break;
        case 30:
            cout << "You now have a Diamond" << endl;
            break;
        case 20:
            cout << "Hearts" << endl;
            break;
        case 10:
            cout << "Clubs" << endl;
            break;
    }
    return 0;
}