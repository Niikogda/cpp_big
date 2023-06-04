#include <iostream>
#include <windows.h>

using namespace std;

void printCard(string rank, string suit) {
    string cardArt;


    string spades = "\u2660";
    string hearts = "\u2665";
    string diamonds = "\u2666";
    string clubs = "\u2663";

    
    cout << " _____ " << endl;
    cout << "|" << rank << "    |" << endl;
    cout << "|     |" << endl;
    cout << "|  " << suit;

    
    if (suit == "Spades") {
        cout << spades;
    }
    else if (suit == "Hearts") {
        cout << hearts;
    }
    else if (suit == "Diamonds") {
        cout << diamonds;
    }
    else if (suit == "Clubs") {
        cout << clubs;
    }

    cout << "  |" << endl;
    cout << "|     |" << endl;
    cout << "|    " << rank << "|" << endl;
    cout << " ----- " << endl;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string rank, suit;

    cout << "¬вед≥ть ранг картки (A, 2-10, J, Q, K): ";
    cin >> rank;
    cout << "¬вед≥ть масть картки (Spades, Hearts, Diamonds, Clubs): ";
    cin >> suit;

    printCard(rank, suit);

    return 0;
}
