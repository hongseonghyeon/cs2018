// exam6.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	double fUseElec; //사용량
	double fTotal; //전체 요금
	double result_cost; //최종 사용 요금
	
	printf("전기 사용량을 입력하세요 : ");
	scanf_s("%lf", &fUseElec);

	fTotal = 660 + (fUseElec*88.5);
	double tex = fTotal * 0.09; //세금

	result_cost = fTotal + tex; //최종 사용 요금

	printf("%0.3lf \n", result_cost);

    return 0;
}

