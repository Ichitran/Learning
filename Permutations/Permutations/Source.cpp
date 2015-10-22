#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;
void main()
{
	vector<string> color;
	color.push_back("blue");
	color.push_back("red");
	color.push_back("yellow");
	color.push_back("purple");
	color.push_back("green");
	color.push_back("white");

	vector<string> size;
	size.push_back("small");
	size.push_back("medium");
	size.push_back("large");

	string isBordered[] = { "true", "false" };
	vector<string> bordered;
	bordered.push_back("true");
	bordered.push_back("false");

	int perm = 0;
	for (auto it = color.begin(); it != color.end(); ++it)
	{
		cout << "****" << "Color Update" << "****" << endl;
		for (auto lt = size.begin(); lt != size.end(); ++lt)
		{
			for (auto bt = bordered.begin(); bt != bordered.end(); ++bt)
			{
				cout << "Permutation: " << perm << endl;
				cout << "\tColor: " << *it << endl;
				cout << "\tSize: " << *lt << endl;
				cout << "\tBordered: " << *bt << endl;
				perm++;
			}
		}
		
	}
}