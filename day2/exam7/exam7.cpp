// exam7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char a;

	scanf_s("%c", &a ,sizeof(char));
	printf("%d %c \n", a, a);
    return 0;
}

