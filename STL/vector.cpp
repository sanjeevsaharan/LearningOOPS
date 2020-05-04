#include<iostream>
#include<vector>
using namespace std;

class mydata
{
	int value;
public:
	mydata()
	{
		cout << "Default Constructor" << endl;
	}
	mydata(int num) :value(num)
	{
		cout << "Constructor" << endl;

	}
	~mydata()
	{
		cout << "Destructor" << endl;
	}

	operator int() const { return value; } //overloading-typecasts
	
};

template<typename T>
void PrintVector(vector<T>& v)
{
	for (auto& i : v)
	{
		cout << i << endl;
	}
	cout << endl;
}
template<>
void PrintVector(vector<mydata>& v) //template specialization
{
	for (auto& i : v)
	{
		int temp = (int)i;
		cout << temp << " ";
	}
	cout << endl;

}

int main()
{
	vector<mydata>v(6,0); //Creates a vector of size 6 ,init with value 0
	vector<string>vstr(6);
	vector<int>vec[5]; //Creates 5 vectors of int type

	vector< vector< int > > Matrix2(4, vector< int >(5, -1)); //create a matrix of size 4*5 and fill it with -1.


	for (auto& vector_ : Matrix2) //print vector of vector
	{
		for (auto& i : vector_)
		{
			cout << i << " ";
		}
		cout << endl;
	}


	cout << "Capicity : " << v.capacity() << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Capicity : " << v.capacity() << endl;
		v.push_back(mydata(i));
		cout << "Capicity : " << v.capacity() << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		vstr.push_back("abc");
	}
	PrintVector(v);
	PrintVector(vstr);

	v.resize(16); //resize vector. Noe next insertion will be at after 16 th position

	v.push_back(100);

	PrintVector(v);

	v.erase(v.begin() + 4, v.begin() + 8);
	PrintVector(v);

	v.insert(v.begin()+6, 3);
	PrintVector(v);

	return 0;
}