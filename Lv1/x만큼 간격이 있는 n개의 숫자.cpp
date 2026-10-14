// https://school.programmers.co.kr/learn/courses/30/lessons/12954
#include <vector>
std::vector<long long> solution(int x, int n) {
    std::vector<long long> answer;
    
    for(int i=0;i<n;i++){
        answer.push_back(x * (i+1));
    }

    return answer;
}
