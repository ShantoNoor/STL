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
#include <fstream>
using namespace std;

void print(int x)
{
	cout << x << endl;
}

bool isOdd(int i)
{
	return i%2;
}

int main()
{
 	/*
	set<int>::iterator it;
	set<int>::const_iterator cit; //Read_only

	set<int>myset = {2, 4, 5, 1, 9};
	for(cit = myset.begin(); cit != myset.end(); ++cit)
	{
		cout << *cit << endl;
	}

	for_each(myset.cbegin(), myset.cend(), print);

	it = myset.find(4);
	auto it2 = it;
	advance(it, 2);
	cout << *it << endl;

	cout << distance(it2, it) << endl;
	*/
/*
	//Insert Iterator:
	vector<int> vec1 = {4, 5};
	vector<int> vec2 = {12, 14, 16, 18};

	vector<int>::iterator it = find(vec2.begin(), vec2.end(), 12);
	insert_iterator<vector<int>> iit(vec2, it);
	//back_insert_iterator<vector<int>> iit(vec2);
	//front_insert_iterator<vector<int>> iit(vec2); //Error!! //Vector doesn't have .push_front() function!!
	copy(vec1.begin(), vec1.end(), iit);
	for_each(vec2.begin(), vec2.end(), print);
*/
/*
	//Stream Iterator:
	vector<string> vec4;
	ifstream fin("input.txt");

	// copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vec4));
	// copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, " "));

	//copy(istream_iterator<string>(cin), istream_iterator<string>(), ostream_iterator<string>(cout, " "));

	copy(istream_iterator<string>(fin), istream_iterator<string>(), back_inserter(vec4));
	sort(vec4.begin(), vec4.end());
	copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, " "));
*/
/*
	//Reverse Iterator:
	vector<int> vec = {4, 5, 6, 7};
	reverse_iterator<vector<int>::iterator> rit;

	for(rit = vec.rbegin(); rit != vec.rend(); rit++)
		cout << *rit << endl;
*/
/*
	//       Algorithms       //

	vector<int> vec = {4, 2, 5, 1, 3, 9};
	vector<int>::iterator it = min_element(vec.begin(), vec.end()); //it -> 1
	cout << *it << endl;

	sort(vec.begin(), it); //{2, 4, 5, 1, 3, 9}
	for(auto x : vec)
		cout << x << " ";
	cout << endl;

	reverse(it, vec.end()); //{2, 4, 5, 9, 3, 1} //it -> 9
	for(auto x : vec)
		cout << x << " ";
	cout << endl;

	//Not safe
	vector<int> vec2(3);
	for(auto x : vec2)
		cout << x << " ";
	cout << endl;

	copy(it, vec.end(), vec2.begin());
	for(auto x : vec2)
		cout << x << " ";
	cout << endl;

	//safe but not efficient
	vector<int> vec3;
	copy(it, vec.end(), back_inserter(vec3));
	for(auto x : vec3)
		cout << x << " ";
	cout << endl;

	//safe and efficient
	vec3.insert(vec3.end(), it, vec.end());
	for(auto x : vec3)
		cout << x << " ";
	cout << endl;

	it = find_if(vec.begin(), vec.end(), isOdd);
	cout << *it << endl;

	int arr[4] = {6, 3, 7, 4};
	sort(arr, arr+4);
	for(auto x : arr)
		cout << x << " ";
	cout << endl;
*/
	return 0;
}