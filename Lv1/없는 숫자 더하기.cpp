// https://school.programmers.co.kr/learn/courses/30/lessons/86051
#include <vector>

int solution(std::vector<int> num){
    int sum = 0;
    
    for(int i=0;i<10;i++)
    {
        for(auto n : num)
        {
            if(i==n)
                break;
            if(n==num.back())
                sum += i;
        }
    }
    return sum;
}
