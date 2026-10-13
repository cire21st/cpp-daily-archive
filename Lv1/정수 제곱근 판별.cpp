// https://school.programmers.co.kr/learn/courses/30/lessons/12934?language=cpp
#include <cmath>

long long solution(long long n) {
    if(std::sqrt(n) == (int)std::sqrt(n))
        return std::pow(std::sqrt(n)+1,2);
    else return -1;
}
