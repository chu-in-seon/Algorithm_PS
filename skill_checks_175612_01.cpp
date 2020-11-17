#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solution(std::string skill, std::vector<std::string> skill_trees) {
    int answer = 0;
    for (const auto& skillStr : skill_trees)
    {
        bool isValid = true;
        std::string::iterator begin = skill.begin();
        std::string::iterator pivot = skill.begin();
        std::string::iterator end = skill.end();
        for (const auto item : skillStr)
        {
            const std::string::iterator& it = std::find(begin, end, item);
            if (skill.end() != it)
            {
                if (std::distance(begin, pivot) < std::distance(begin, it))
                {
                    isValid = false;
                    break;
                }
                else
                {
                    pivot++;
                }
            }
        }

        if (true == isValid)
        {
            answer++;
        }
    }
    return answer;
}