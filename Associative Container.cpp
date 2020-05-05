/*
Always sorted, default criteria is <
No push_back(), push_front()
*/
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
	//set //begin

	set<int> myset;
	myset.insert(3);
	myset.insert(1);
	myset.insert(7);

	set<int>::iterator it;
	it = myset.find(7);

	pair<set<int>::iterator, bool> ret;
	ret = myset.insert(3);

	if(ret.second == false)
		it = ret.first;

	myset.insert(it, 9);
	myset.erase(it);
	myset.erase(7);

	for(auto x : myset)
		cout << x << " ";
	cout << endl;

	//set //end
	*/

	/*
	//map //begin

	map<char, int> mymap;
	mymap.insert(pair<char, int>('z', 100));
	mymap.insert(make_pair('a', 200));

	map<char, int>::iterator it = mymap.begin();
	mymap.insert(it, make_pair('b', 200));

	for(pair<const char, int> x : mymap)
		cout << x.first << " " << x.second << " " << endl;


	it = mymap.find('z'); //O(log(n))
	cout << (*it).first << " " << (*it).second << " " << endl;

	for(it = mymap.begin(); it != mymap.end(); ++it)
	{
		cout << (*it).first << " " << (*it).second << " " << endl;
	}

	//map //end
	*/

	return 0;
}