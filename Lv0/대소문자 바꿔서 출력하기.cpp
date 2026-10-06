// https://school.programmers.co.kr/learn/courses/30/lessons/181949
#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::cin >> str;
    
    for(int i=0;i<str.size();i++)
    {
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] +=  'a' - 'A';
        else
            str[i] += 'A' - 'a';
    }
    std::cout << str;
    return 0;
}
