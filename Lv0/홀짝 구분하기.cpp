// https://school.programmers.co.kr/learn/courses/30/lessons/181944
#include <iostream>
#include <stdio.h>

int main(void) {
    int n;
    std::cin >> n;
    (n & 1) ? printf("%d is odd\n",n) : printf("%d is even",n);
    
    return 0;
}
