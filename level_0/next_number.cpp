// 등차수열 혹은 등비수열 common이 매개변수로 주어질 때, 마지막 원소 다음으로 올 숫자를 return 하도록 solution 함수를 완성해보세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int answer = 0;
    int num = 0;
    if ((common[common_len - 1] - common[common_len - 2]) == (common[common_len - 2] - common[common_len - 3])) {
        answer = common[common_len - 1] + (common[common_len - 1] - common[common_len - 2]);
    }
    else {
        answer = common[common_len - 1] * (common[common_len - 1] / common[common_len - 2]);
    }
    return answer;
}