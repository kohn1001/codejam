#include <iostream>
#include <string>


/*    str = "1001"
 * 	i 		str[i] 		res		
 *	0 			1		res = 10*0 + 1 = 1
 *	1			0		res = 10*1 + 0 = 10
 */

using namespace std;

int string_to_int(string &&str)
{
	int res = 0;
	int sign = 1, i;
	if (str.size() == 0) { return 0; }
	if (str[0] == '-') {
		sign = -1;
		i = 1;
	}
	else {
		i = 0;
	}
	for(; i < str.size(); ++i) {
		res = 10*res + (str[i] - '0');
	}
	return sign * res;
}

int main()
{
	string str;
	cout << "Enter the string you want to covert to int: " << endl;
	cin >> str;
	int i = string_to_int(move(str));
	cout << "conversion of " << str << " to int is: " << i << endl;
	return 0;
}
