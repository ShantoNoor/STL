#include <vector>
#include <algorithm>
#include <set>
#include <functional>
#include <deque>

#include <iostream>
#include <math.h>
using namespace std;

template <typename T>
void print(T a)
{
	for(auto x : a)
		cout << x << " ";
	cout << endl;
}
	
// Function Objects (functors)
// class X 
// {
// public:
// 	void operator()(string str) 
// 	{
// 		cout << "C F W P : " << str << endl;
// 	}
// };

// //parameterized function
// class X 
// {
// public:
// 	X(int i) {}
// 	void operator()(string str) 
// 	{
// 		cout << "C F W P : " << str << endl;
// 	}
// };

//with global varriable
// int val = 4;
// void add2(int i)
// {
// 	cout << i+val << endl;
// }

// template<int val>
// void addVal(int i)
// {
// 	cout << i+val << endl;
// }

// template <typename T>
// class AddValue 
// {
// 	T val;
// public:
// 	AddValue(T j) : val(j) { }
// 	void operator() (T i)
// 	{
// 		cout << i+val << endl;
// 	}
// };

// void addVal(int i, int val)
// {
// 	cout << i+val << endl;
// }

// double Pow(double x, double y)
// {
// 	return pow(x, y);
// }

// int needCopy(int x)
// {
// 	if((x>20)||(x<5))
// 		return x;
// 	else
// 		return 0;
// }


bool lsb_less(int x, int y)
{
	return ((x % 10) < (y % 10));
}

class Lsb_less
{
public:
	bool operator() (int x, int y)
	{
		return ((x % 10) < (y % 10));
	}
};

int main()
{
	// vector<int> vec = {2, 3, 4, 5};
	// for_each(vec.begin(), vec.end(), add2);
	// for_each(vec.begin(), vec.end(), addVal<3>);
	// int x = 9;
	// for_each(vec.begin(), vec.end(), AddValue<int>(x));

	// x = multiplies<int>()(3, 4);
	// cout << x << endl;

	// if(not_equal_to<int>()(x, 10))
	// 	cout << x << endl;

	// AddValue<float>(25.5F)(4.5F);

	// set<int> myset = {2, 3, 4, 5};
	// vector<int> vec /*= {2, 3, 4, 5}*/;
	// transform(myset.begin(), myset.end(), back_inserter(vec), bind(multiplies<int>(), placeholders::_1, 10));
	// print(vec);

	// for_each(vec.begin(), vec.end(), bind(addVal, placeholders::_1, 3));


	// set<int> myset = {3, 1, 25, 7, 12};
	// deque<int> deq;
	// auto f = function<double (double, double)>(Pow);
	// transform(
	// 	myset.begin(), 
	// 	myset.end(), 
	// 	back_inserter(deq), 
	// 	bind(
	// 		logical_or<bool>(), 
	// 		bind(greater<int>(), placeholders::_1, 20), 
	// 		bind(less<int>(), placeholders::_1, 5)
	// 	)
	// );

	// transform(
	// 	myset.begin(), 
	// 	myset.end(), 
	// 	back_inserter(deq), 
	// 	needCopy
	// );

	//With Lambda function
	// transform(
	// 	myset.begin(), 
	// 	myset.end(), 
	// 	back_inserter(deq), 
	// 	[](int x) { return ((x > 20) || (x < 5)); }
	// );


	const set<int, Lsb_less> myset/* = {3, 1, 25, 7, 12}*/;





	return 0;
}