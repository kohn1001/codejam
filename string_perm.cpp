#include <iostream>



#include <string>


using namespace std;

void printPerm(string &str, int l)
{
	if(l == str.size()) {
		cout << str << endl;
	}

	for(int i = l; i < str.size(); ++i) {
		swap(str[i], str[l]);
		printPerm(str, l+1);
		swap(str[i], str[l]);
	}
}


void perm(string str, string perm, 
int main()
{
	cout << "This is perm test\n";
	string str = "abc";
	printPerm(str, 0);

	return 0;
}
