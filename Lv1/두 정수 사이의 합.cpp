// https://school.programmers.co.kr/learn/courses/30/lessons/12912#
#include <string>
#include <vector>

long long solution(int a, int b) {
    long long answer = 0;
    if(a > b)
    {
        int temp = a;
            a = b;
            b = temp;
    }
    for(a;a<=b;a++)
        answer += a;
    
    return answer;
}
