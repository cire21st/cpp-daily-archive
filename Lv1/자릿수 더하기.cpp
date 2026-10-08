https://school.programmers.co.kr/learn/courses/30/lessons/12931
#include <iostream>

int solution(int n)
{   int sum = 0;
    std::string str= std::to_string(n);
 
    for(const auto c:str)
        sum += (int)c - '0';
 
    return sum;
}
