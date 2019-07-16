/*
 * 작성자 : 김동규
 * 작성일 : 2019년 7월 15일
 * 문제 번호 : 	1110
 */

#include <stdio.h>

int main(int argc, const char *argv) {
	int org, a, b, res;
	int count = 0;
	scanf("%d", &org);
	res = org;
	do {
		a = (res >= 10) ? (res / 10) : 0;
		b = res % 10;
		res = ((a + b) >= 10 ? (a + b) % 10 : (a + b)) + (b * 10);
		count++;
	} while (org != res);
	printf("%d", count);
}