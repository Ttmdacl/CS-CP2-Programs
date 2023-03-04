﻿#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n)
{
    vector<vector<int>> answer;
    for (int i = 0; i < num_list.size() / n; i++)
    {
        answer.push_back(vector<int>{ num_list[i * n + 0], num_list[i * n + 1], num_list[i * n + 2] });
    }
    return answer;
}