// exam5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int pay,bonus;
	printf("본봉 입력 : ");
	scanf_s("%d", &pay);

	printf("보너스 입력 : ");
	scanf_s("%d", &bonus);

	int i = (pay + bonus)*0.91;

	printf("%lf %d \n", (pay + bonus)*0.91, i);
	printf("한달 실 입금액 : %d 만원 \n", i);

    return 0;
}

