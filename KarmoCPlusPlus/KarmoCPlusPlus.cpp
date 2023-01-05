﻿#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
	while (n >= a)
	{
		int newCola = (n / a) * b;
		n = newCola + n % a;
		answer += newCola;
	}
    return answer;
}