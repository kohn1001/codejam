

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Dir{
public:
	Dir(string name=string()): name_(name)
	{
	}
	~Dir() {}
	void insertSubDir(string name)
	{
		m.emplace(make_pair(name, Dir(name)));
	}
	void printSubDirs()
	{
		for(auto &i : m) {
			cout << " " << i.first << " ";
		}
		cout << endl;
	}
private:
	string name_;
	map<string, Dir> m;
};

int main()
{
	Dir d("home");
	d.insertSubDir("gcd");
	d.insertSubDir("dir");
	d.printSubDirs();
	return 0;
}
