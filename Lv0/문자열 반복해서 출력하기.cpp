// https://school.programmers.co.kr/learn/courses/30/lessons/181950
#include <iostream>
#include <string>

int main(void) {
    std::string str;
    int n;
    
    std::cin >> str >> n;
    for(int i=0;i<n;i++)
        std::cout << str;
    return 0;
}
