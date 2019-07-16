/*
 * 작성자 : 김동규
 * 작성일 : 2019년 7월 16일
 * 문제 번호 : 10818
 */

#include <stdio.h>
#define MAX 1000000
#define MIN -1000000

int main(int argc, const char *argv) {
	int number;
	int count, i;
	int max = MIN, min = MAX;
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%d", &number);
		max = number > max ? number : max;
		min = number < min ? number : min;
	}
	printf("%d %d", min, max);
}