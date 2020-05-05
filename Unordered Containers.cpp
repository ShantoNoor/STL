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
	/*
	//unordered set //begin
	unordered_set<string> myset = {"red", "green", "blue"};
	unordered_set<string>::const_iterator it = myset.find("green"); //O(n)
	if(it != myset.end())
		cout << *it << endl;

	myset.insert("yellow");

	vector<string> vec = {"purple", "pink"};
	myset.insert(vec.begin(), vec.end());

	for(string x : myset)
		cout << x << endl;

	cout << "Load Factor: " << myset.load_factor() << endl;

	cout << "red is in bucket: #" << myset.bucket("red") << endl;
	cout << "Total Bucket Number is: #" << myset.bucket_count() << endl;

	//unordered set //end
	*/

	//Associative Array //begin
	//with map and unordered map

	unordered_map<char, string> day = {{'S', "Sunday"}, {'M', "Monday"}};

	cout << day['S'] << endl;
	cout << day.at('M') << endl;

	day['W'] = "Wednesday";
	day.insert(make_pair('F', "Friday"));

	for(pair<char, string> x : day)
		cout << x.first << " " << x.second << endl; 


	//Associative Array //begin



	return 0;
}