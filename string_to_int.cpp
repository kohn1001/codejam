#include <iostream>


/*    str = "1001"
 * 	i 		str[i] 		res		
 *	0 			1		res = 10*0 + 1 = 1
 *	1			0		res = 10*1 + 0 = 10
 */

using namespace std;

int string_to_int(string str)
{
	int res = 0;
	for(int i =0; i < str.size(); ++i) {
		res = 10*res + (str[i] - '0');
	}
}

int main()
{
	cout << " string to int\n";
	return 0;
}
