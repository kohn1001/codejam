#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>

using namespace std;

enum class Face { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
enum class Suit	{ Diamond, Clubs, Spades, Heart};

template <typename T>
string convertEnumToString(const T &t)
{
	stringstream ss;
	ss << t;
	return ss.str();
}

class Card {

public:
	
	Card(){}
	~Card(){}
	Face getFace() { return face_;}
	Suit getSuit() { return suit_;}

private:
	Face face_;
	Suit suit_;
};

class DeckOfCards {

public:
	DeckOfCards() {}
	~DeckOfCards() {}
	void dealCards() {}
	void shuffle();
	//set<Card> &getCards() {}

private:
	vector<Card> cards;
	int currentIndex;
//	const int numOfCards = 52;
};

class BlackJack {
public:

private:
	DeckOfCards deckOfCards_;
};

int main()
{
	vector<string>  face[] = {"Ace", "Two", "Three", "Four"};
	vector vec(begin(), end(), face);
		
	return 0;
}
