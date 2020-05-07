#include <set>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

template <typename T>
void print(T a)
{
	for(auto x : a)
		cout << x << " ";
	cout << endl;
}

class Lsb_less
{
public:
	bool operator() (int a, int b) const
	{
		return ((a % 10) < (b % 10));
	}
};

struct Person
{
	int age;
	string name;
	bool operator < (const Person& rhs) const
	{
		return (age < rhs.age);
	}
};

int main()
{
	// set<int, greater<int>> myset = {2, 3, 1, 5, 4};
	// print<set<int, greater<int>>>(myset);

	// set<int, Lsb_less> myset = {21, 23, 14, 550, 13};
	// print<set<int, Lsb_less>>(myset);

	set<Person> myset = {{20, "shanto Noor"}, {30, "Jhon"}, {15, "noor"}};
	for(const auto x : myset)
		cout << x.age << " " << x.name << endl;


	return 0;
}