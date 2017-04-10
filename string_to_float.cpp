
/*
 * convert string to float - 
 * loop over each char in string till hitting the '.' part, start to calculate a number in which 
 * First check if the number is negative or positive 
 *
 *
 */

#include <iostream>
using namespace std;
/*
str1 = "111000.11"; str.size() -> 
str2 = "-111000.11"

i		str[i]			res					sub		
-------------------------------------------------
0			1			res=10*0+1			0
1			1			res = 10*1+1=11		0
2			1		res=10*11+1=111			0
3

					
*/

float string_to_float(string str)
{
	float res = 0;
	int sign = 1;
	int i;
	//cout << "string is : " << str << endl;
	for(i = 0; i < str.size(); ++i) {
		if(i==0 && str[i] == '-') {
			sign = -1;
			continue;
		}
		if(str[i] == '.') {
			++i;
			break;
		}
		res = 10*res + (str[i]-'0');
	}
	int sub;
	for(sub=1; str[i]; ++i, sub *= 10) {
		res = 10*res + (str[i]-'0');
	}
	res /= sub;
	return sign*res;
}

int main()
{
	
	cout << "Type in the string to convert to float: \n";
	int N;
	cin >> N;
	for(auto i = 0; i < N; ++i) {
		string str;
		cin >> str;
		float res = string_to_float(str);
		cout << "Case #" << i+1 << ": " << res << " " << endl;
	}
	return 0;
}

