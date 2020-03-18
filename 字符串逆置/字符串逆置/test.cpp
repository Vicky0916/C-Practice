#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	size_t start = 0, end = 0;
	string str1;
	reverse(str.begin(), str.end());
	//tneduts a ma i
	//for (int j = 0; j < str.size(); j++)
	while(start<str.size())
	{
		while (start!=str.size()&&str[end] != ' ')
		{
			++end;
		}
		reverse(start, end);
		if (end == str.size())
		{
			start = end;
		}
		else
		{
			start = end + 1;
		}
	}
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;
	system("pause");
	return 0;
}