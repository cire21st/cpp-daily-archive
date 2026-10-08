// https://school.programmers.co.kr/learn/courses/30/lessons/87389

int solution(int n) {
    if(n & 1)
        return 2;
    else
        for(int i=3;i<n;i+=2)
            if(n%i == 1) return i;
}
