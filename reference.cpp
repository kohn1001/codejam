#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

void testRef(string &&str, vector<int> &v)
{	
	vector<int> &rv = v;
	vector<int> *npv = new vector<int>(v);
	//unique_ptr<vector<int>> uptrVi = &v; //make_unique<vector<int>>();
	unique_ptr<vector<int>> uptrVi(&v); //make_unique<vector<int>>();

	for(auto &i : *uptrVi) {
		cout << "ptr: " << i << " " << endl;
	}

//	shared_ptr<vector<int>> uptrVi = npv; //make_unique<vector<int>>();
	printf("This is the address of v: %p\n", &v);
	vector<int>* pv = &v;
	printf("This is the address of pv: %p\n", pv);
}

int main()
{
	vector<int> v;
	string str;
	cout << "this is a reference test\n";
	v.emplace_back(1);
	v.emplace_back(2);
	testRef("testing", v);

	return 0;
}
