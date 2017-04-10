#include <string>
#include <sstream>
#include <iostream>

enum class Suit {clubs, diamond, spades, heart};

using namespace std;
string convertEnumToString(Suit s)
{
	stringstream ss;
	ss << s;
	return ss.str();
}

int main()
{
	Suit suit(Suit::clubs);
//	cout << "This is the value of suit: " << convertEnumToString(suit) << " " << endl;
	cout << "This is emum to string test\n";
	return 0;
}
