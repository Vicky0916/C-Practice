#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <vector>
#define N 10
using namespace std;
////void F(vector<string> board, vector<vector<int>> len, int x, int y)
////{
////	vector<vector<int>> b = { {-1,0},{1,0},{0,-1},{0,1} };
////	for (int i = 0; i < 10; i++)
////	{
////		int nx = x + b[i][0];
////		int ny = y + b[i][1];
////		if (nx < 10 && nx >= 0 && ny < 10 && ny >= 10 && ny >= 0 && board[nx][ny] != '#')
////		{
////			if (len[nx][ny] == 0 || (len[x][y] + 1 < len[nx][ny]))
////			{  
////				len[nx][ny] = len[x][y] + 1;
////				F(board, len, nx, ny);
////			}
////		}
////	}
////}
////int main()
////{
////	vector<string> board(N);
////	while (getline(cin, board[0]))
////	{
////		vector<vector<int>> len(N, vector<int>(N, 0));
////		for (int i = 1; i < N; i++)
////			getline(cin, board[i]);
////			F(board, len, 0, 1);
////			cout << len[9][8] << endl;
////	}
////	system("pause");
////	return 0;
////}
////i am a student.
////.tneduts a ma i
////.student a am i
int main()
{
	string s;
	getline(cin, s);
	
		reverse(s.begin(), s.end());
		auto start = s.begin();
		
		while (start != s.end())
		{
			auto end = start;
			while (end!=s.end()&&*end != ' ')
			{
				end++;
			}
			reverse(start, end);
			if (end != s.end())
			{
				start = end + 1;
			}
			else
			{
				start = end;
			}
	
		}
			cout << s << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	 注意这里要使用getline，cin>>s遇到空格就接收结束了
	getline(cin, s);
	 翻转整个句子 
	reverse(s.begin(), s.end()); // 翻转单词
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	system("pause");
	return 0;
}
