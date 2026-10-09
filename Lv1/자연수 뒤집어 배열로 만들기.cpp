// https://school.programmers.co.kr/learn/courses/30/lessons/12932
#include <string>
#include <vector>

std::vector<int> solution(long long n) {
    std::string str = std::to_string(n);
    std::vector<int> answer(str.size());
    
    for(int i=0;i<str.size();i++)
        answer[i] = str[str.size() - 1 - i] -'0';
    
    return  answer;
}
