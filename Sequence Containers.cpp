/* STL Headers */
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <functional>
#include <array>

#include <iostream>
using namespace std;

int main()
{
	/* Vector Properties
	fast insert/remove at the end: O(1)
	slow insert/remove at the beginnig or middle: O(n)
	slow search: O(n)
	*/
	/*
	//Vetcor //Begin
	vector<int> vec; // vec.size() == 0
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8); //vec: {4, 1, 8}; 

	cout << vec.size() << endl; //vec.size() == 3;

	cout << vec[2] << endl;
	cout << vec.at(2) << endl;

	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	int* p = &vec[0];
	p[2] = 9;
	cout << p[2] << endl;

	for(int x : vec)
		cout << x << " ";
	cout << endl;

	if(vec.empty())
		cout << "Y " << vec.empty() << endl;
	else
		cout << "N " << vec.empty() << endl;

	vector<int> vec2(vec);
	vec2.swap(vec);
	vec.clear();

	if(vec.empty())
		cout << "Y " << vec.empty() << endl;
	else
		cout << "N " << vec.empty() << endl;

	for(int x : vec2)
		cout << x << endl;

	vector<int> a = {1, 2, 3};
	vec[5] = 5; //Error!!!!!!! Space Not Created Yet
	//Vetcor //End
	*/

	/* Deque Properties
	fast insert/remove at the beginnig and the end: O(1)
	slow insert/remove at middle: O(n)
	slow search: O(n)
	*/
	/*
	//Deque //Begin
	deque<int> deq = {4, 6, 7};
	deq.push_front(2); //{2, 4, 6, 7}
	deq.push_back(3); //{2, 4, 6, 7, 3}

	cout << deq[2];
	//Deque //End
	*/

	/* List Properties
	fast insert/remove at any place: O(1)
	no random access: no [] operator
	slow search: O(n)
	*/
	/*
	//List //Begin
	list<int> mylist = {5, 2, 9};
	mylist.push_front(6); //{6, 5, 2, 9}
	mylist.push_back(4); //{6, 5, 2, 9, 4}

	list<int>::iterator it = find(mylist.begin(), mylist.end(), 2); //it -> 2
	mylist.insert(it, 8); //{6, 5, 8, 2, 9, 4}
	it++; // it -> 9
	mylist.erase(it); //{6, 5, 8, 2, 4}	
	it = find(mylist.begin(), mylist.end(), 8);
	
	cout << *it << endl;

	list<int> mylist2 = {10, 22, 44, 54, 64};
	list<int>::iterator ita, itb;
	ita = find(mylist2.begin(), mylist2.end(), 22);
	itb = find(mylist2.begin(), mylist2.end(), 54);

	//  List Special  //
	mylist.splice(it, mylist2, ita, ++itb);

	for(int x : mylist)
		cout << x << " ";
	cout << endl;
	//List //End
	*/

	/*
	Array Properties
	size can not be changed
	array<int, 3> a, array<int, 4> b; a & b are different in type
	*/
	/*
	//Array //Begin
	int a[3] = {3, 4, 5};
	array<int, 3> a = {3, 4, 5};
	a.begin();
	a.begin();
	a.begin();
	a.begin();
	//Array //End
	*/

	return 0;
}