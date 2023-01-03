#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
	const int numbersSize = static_cast<int>(numbers.size());
	set<int> setItem;
	vector<int> answer;
	
	for (int i = 0; i < numbersSize; i++)
	{
		for (int j = i + 1; j < numbersSize; j++)
		{
			setItem.insert(numbers[i] + numbers[j]);
		}
	}

	for (const int key : setItem)
	{
		answer.push_back(key);
	}

	sort(answer.begin(), answer.end());
	return answer;
}