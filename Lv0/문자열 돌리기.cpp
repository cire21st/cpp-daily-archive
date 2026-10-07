// https://school.programmers.co.kr/learn/courses/30/lessons/181945
#include <iostream>
#include <string>

int main(void) {
    std::string str;
    std::cin >> str;
    
    for(auto c:str)
    std::cout << c << std::endl;
        
    return 0;
}
