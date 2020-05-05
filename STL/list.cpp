#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	list <int>::iterator it;
	it = l.begin();
	l.push_back(10);
	l.push_back(20);


	//l.insert(it,1,5);
//	cout << "iterator " << *it << endl;
	l.insert(it, 15);
	//cout <<"iterator " <<*it << endl;

	l.push_front(25);
	l.push_front(45);
	//l.remove(20);
	//cout << "iterator " << *it << endl;
	//l.assign(3, 2);
	for (auto const& i : l)
	{
		cout << i << " ";
	}
	l.remove(20);
	
	cout << endl;

	return 0;

}
