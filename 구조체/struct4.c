//비트 필드 구조체 
#include <stdio.h>

struct bit_filed{
    // unsigned int son : 2; 
    // // 콜론: 은 비트필드 선언에서 " 이멤버가 몇 비트 짜리냐? "를 지정하는 문법임 
    // // 등호 = 는 "값을 대입하라"는 의미 
    // // 즉 unsigned int son : 2; 는 son이라는 이름의 비트 필드를 2비트 크기로 선언 . 
    // unsigned int daughter : 2; 
    // unsigned int pet : 3; 
    unsigned char a : 1; 
    unsigned char b : 2; 
    // unsigned char  : 0;  1 다음 남은 7비트 모두를 패딩비트로 하겠다 
    // unsigned char : 2; 1다음 2비트를 패딩비트로 사용하겠다. 
    unsigned char c : 3; 
    unsigned char d : 4; // 8비트면 d는 패딩비트가 됨 
    // unsigned 는 멤버로 배열로 선언할 수 없고 주소 연산을 이용할 수 없다. 
    // 주소연산 없으니, 키보드로 입력받는 것이 불가능함. 
    // 다른 변수에 (tmep 에 입력)받아서 직접 대입시켜주는 방법 뿐 
    // int tmmp ; scanf("%d", &temp);  s.a = tmep; 
}; 