// https://school.programmers.co.kr/learn/courses/30/lessons/12919
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    int i, idx = 0;
    
    for(i=0;i<seoul.size();i++){
        if(seoul[i] == "Kim")
            idx = i;
    }
    return "김서방은 " + to_string(idx) + "에 있다";
}
