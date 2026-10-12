// https://school.programmers.co.kr/learn/courses/30/lessons/12937
#include <iostream>

std::string solution(int num) {
    if(num & 1 == 1)
        return "Odd";
    else
        return "Even";
}
