//어떤 세균은 1시간에 두배만큼 증식한다고 합니다.
//처음 세균의 마리수 n과 경과한 시간 t가 매개변수로 주어질 때 t시간 후 세균의 수를 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n, int t) {
    int answer = 0;
    answer = n*pow(2,t);
    return answer;
}