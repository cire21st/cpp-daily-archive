//https://school.programmers.co.kr/learn/courses/30/lessons/12928
int SumDivisor(int& n)
{   
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            sum += i;
    }
    return sum;
}

int solution(int n) {
    
    return SumDivisor(n);
}
