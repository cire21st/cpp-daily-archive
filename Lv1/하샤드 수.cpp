// https://school.programmers.co.kr/learn/courses/30/lessons/12947
#include <string>
#include <iostream>
bool solution(int x) {
    bool answer = 1;
    int sum = 0;
    std::string str = std::to_string(x);
    for(auto c: str) sum += c - '0';
    
    return x%sum==0 ? 1: 0;
}
