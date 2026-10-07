// https://school.programmers.co.kr/learn/courses/30/lessons/181943
#include <string>
#include <vector>
std::string solution(std::string my_string, std::string overwrite_string, int s) {
    return my_string.replace(s,overwrite_string.size(),overwrite_string);
}
