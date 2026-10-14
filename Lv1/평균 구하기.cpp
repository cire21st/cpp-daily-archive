// https://school.programmers.co.kr/learn/courses/30/lessons/12944?language=cpp
#include <vector>

double solution(std::vector<int> arr) {
    double answer = 0;
    for(auto i: arr) answer += i;

    return answer/arr.size();
}
