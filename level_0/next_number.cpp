// �������� Ȥ�� ������ common�� �Ű������� �־��� ��, ������ ���� �������� �� ���ڸ� return �ϵ��� solution �Լ��� �ϼ��غ�����.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len�� �迭 common�� �����Դϴ�.
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