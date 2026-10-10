// https://school.programmers.co.kr/learn/courses/30/lessons/12933
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
long long solution(long long n) {
    long long answer = 0;
    std::string str = std::to_string(n);
    std::string new_str;
    
    std::sort(str.begin(),str.end());
    //std::cout << str;
    std::cout << str;
    return answer;
}
