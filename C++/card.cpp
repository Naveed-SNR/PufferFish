#include<iostream>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack = 11, queen = 12, king = 13, ace = 14; 

class card
{
    private:
        
        int number;
        Suit suit;

    public:

        card()
        { }
        
        card (int n, Suit s): number(n), suit(s)
        { }
        void display();
        bool isEqual(card);
};

void card::display()
{
    if (number >= 2 && number <= 10)
        cout << number << " of ";
    else
        switch(number)
        {
            case jack: cout << "Jack of "; break;
            case queen: cout << "Queen of "; break;
            case king: cout << "King of "; break;
            case ace: cout <<  "Ace of "; break;
       }
    switch(suit)
    {
        case clubs: cout << "Clubs \n"; break;
        case diamonds: cout << "Diamonds \n"; break;
        case hearts: cout << "Hearts \n"; break;
        case spades: cout << "Spades \n"; break;
    }
}

bool card::isEqual(card c2)
{
    return  (number == c2.number && suit == c2.suit) ? true : false;
}

int main(void)
{
    card temp, chosen, prize;
    int position;

    card card1(9, clubs);
    cout << "\nCard 1  is the ";
    card1.display();

    card card2(jack, hearts);
    cout << "\nCard 2 is the ";
    card2.display();

    card card3(3, spades);
    cout << "\nCard 3 is the ";
    card3.display();

    prize  = card3;

    cout << "\nSwapping Card 1 and 3...\n";
    temp = card3; card3 = card1; card1 = temp;
    temp = card3; card3 = card1; card1 = temp;

    cout << "\nSwapping Card 2 and Card 3...\n";
    temp = card3; card3 = card2; temp = card2;

    cout << "\nSwapping Card 1 and Card 2...\n";
    temp = card2; card2 = card1; card1= temp;

    cout << "\nNow pick a position(1, 2, 3):\n ";
    prize.display();
    cout << " ? ";
    cin >> position;
    
    switch (position)
    {
        case 1: chosen = card1; break;
        case 2: chosen = card2; break;
        case 3: chosen = card3; break;
    }

    if(chosen.isEqual(prize))
        cout << "That's right! You win!";
    else
        cout << " :_) Sorry you lose.";
    cout << "You chose the ";
    chosen.display();

    return 0;
}