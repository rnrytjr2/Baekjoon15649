// Baekjoon15649.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
void sequence(int N, int M, string answer);
int main()
{
	int N, M;
	cin >> N >> M;
	sequence(N, M, "");
}
void sequence(int N, int M, string answer)
{
	if (answer.size() == M+M-1)
	{
		cout << answer<<"\n";
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (answer.find(to_string(i))==string::npos)
			{
				string answertemp = answer;
				if (answer.size()!=0)
				{
					answertemp += " ";
				}
				sequence(N,M, answertemp + to_string(i));
			}
		}
	}
}