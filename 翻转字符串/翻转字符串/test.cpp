#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{

	system("pause");
	return 0;
}
//int main()
//{
//	while (1)
//	{
//		string str;
//		getline(cin, str);
//		vector<string> v;
//		int pos = 0, start = 0;
//		while(pos<str.size())
//		{
//			pos = str.find(' ', start);
//			string ret = str.substr(start, pos - start);
//			v.push_back(ret);
//			start = pos + 1;
//		}
//		
//		vector<string>::reverse_iterator it = v.rbegin();
//		while (it != v.rend())
//		{
//			cout << *it << " ";
//			it++;
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

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
//int main()
//{
//	string str;
//	getline(cin, str);
//	auto start = str.begin();  //i am a student
//	reverse(str.begin(), str.end());
//	while (start != str.end())
//	{
//		auto end = start;
//		while (end != str.end() && *end != ' ')
//		{
//			++end;
//		}
//		reverse(start, end);
//		if (end == str.end())
//		{
//			start = end;
//		}
//		else
//		{
//			start = end + 1;
//		}
//	}
//	system("pause");
//	return 0;
//}
//void intersection(vector<string> str1, vector<string> str2)
//{
//	map<string, int> m1;
//
//	for (auto e1 : str1)
//	{
//		m1.insert(make_pair(e1,m1[e1]++));
//	}
//	map<string, int> m2;
//	for (auto e2 : str2)
//	{
//		m2.insert(make_pair(e2, m2[e2]++));
//	}
//
//	for (auto e3 : m2)
//	{
//		if (m1.find(e3.first)!=m1.end()&&e3.second>)
//		{
//
//		}
//	}
//
//}
//int main()
//{
//	string A, B;
//	while (cin >> A >> B)
//	{
//		map<char, int> AA, BB;
//		for (int i = 0; i < A.size(); i++)
//		{
//			AA[A[i]]++;
//		}
//		for (int i = 0; i < B.size(); i++)
//		{
//			BB[B[i]]++;
//		}
//		for (int i = 'A'; i <= 'Z'; i++)
//		{
//			if (BB[i] > AA[i])
//			{
//				cout << "NO" << endl;
//				break;
//			}
//			if (i == 'Z')
//			{
//				cout << "Yes" << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
