// exam10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char a = 127;
	a = a + 1;
	// a값이 128이 아닌 -128로 설정됨
	// 8비트로 양수값은 127까지만 표현 가능
	
    return 0;
}

