// https://school.programmers.co.kr/learn/courses/30/lessons/12916
#include <string>

bool solution(std::string s){
    int p_cnt = 0;
    int y_cnt = 0;
    for(auto c:s){
        if(c == 'p' || c=='P') p_cnt+=1;
        if(c == 'y' || c=='Y') y_cnt+=1;
    }
    return p_cnt == y_cnt;
}
