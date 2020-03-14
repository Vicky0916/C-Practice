#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
	
	while (1)
	{
		string str;
		getline(cin, str);
		vector<string> v;
		int pos = 0, start = 0;
		while(pos<str.size())
		{
			pos = str.find(' ', start);
			string ret = str.substr(start, pos - start);
			v.push_back(ret);
			start = pos + 1;
		}
		
		vector<string>::reverse_iterator it = v.rbegin();
		while (it != v.rend())
		{
			cout << *it << " ";
			it++;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	vector<string> v;
//	getline(cin, str);
//	size_t pos = 0, start = 0;
//	do {
//		pos = str.find(' ', start);
//		string ret = str.substr(start, pos - start);
//		v.push_back(ret);
//		start = pos + 1;
//	} while (pos < str.size());
//
//	vector<string>::reverse_iterator it = v.rbegin();
//	while (it != v.rend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}
