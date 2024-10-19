#include <stdio.h>
#define MAX 10

int main()
{
  /**
   * 상수(constant)
   * : 변수와 마찬가지로 데이터를 저장할 수 있는 메모리 공간을 의미한다.
   * but 상수와 변수의 차이점은 상수는 데이터 값을 변경할 수 없다.
   * 
   * 표현 방식은 2가지이다.
   * 
   * 1.리터럴 상수(literal constant)
   * 2.심볼릭 상수(symbolic constant)
   */

  /**
   * 리터럴 상수(literal constant)
   * : 변수와 달리 저장된 메모리 공간을 가리키는 이름을 가지고 있지 않다.
   * tmi) literal = 데이터 그 자체
   * 
   * 예를 들면 : 123(정수형 리터럴 상수), 3.14(실수형 리터럴 상수), 'a'(문자형 리터럴 상수)
   */

  /**
   * 심볼릭 상수(symbolic constant)
   * : 변수와 마찬가지로 이름을 가지고 있는 상수
   * const키워드나 매크로(#define)을 이용하여 선언 가능
   * 
   * 예를 들면 : const int MAX = 10;, #define MAX 10;-
   */

  const int MIN=0;

  printf("MAX : %d, MIN : %d", MAX, MIN);
  return 0;
}