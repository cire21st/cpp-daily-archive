//https://school.programmers.co.kr/learn/courses/30/lessons/76501 
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int sum = 0;
    for(int i=0;i<absolutes.size();i++){
        if(signs[i])
            sum += absolutes[i];
        else
            sum += absolutes[i] * -1;
    }
    return sum;
}
