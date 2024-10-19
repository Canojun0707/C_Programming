#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  /**
   * scanf()
   * : C언어의 표준 입력 함수로
   *   사용자로부터 다양한 데이터를 다양한 서식에 맞춰 입력받음
   * printf()와 같이 서식지정자를 통해 직접 지정해서 데이터를 입력 받음
   */

  /**
   * C언어에서 데이터를 입력받으려면 
   * 입력받고자 하는 데이터의 타입에 해당하는 크기의 메모리를 우선 할당 받아야 함
   * 
   * 할당받은 메모리 공간을 변수(variable)이라고 한다.
   * scanf()에서 '&'기호는 주소 연산자(&)이다.
   * 주소 연산자는 입력받은 데이터를 뒤에 나오는 변수에 저장하라는 의미
   * 
   */
  int num01, num02;

  printf("첫 번째 정수를 입력하세요 : ");
  scanf("%d", &num01);
  printf("두 번째 정수를 입력하세요 : ");
  scanf("%d", &num02);
  printf("입력하신 두 정수의 합은 %d입니다.\n", num01 + num02);
  
  //한번에 두번 받을수도 있음
  printf("두 개의 정수를 입력하세요 : ");
  scanf("%d %d", &num01, &num02);
  printf("입력하신 두 정수를 8진수로 나타내면 %o와 %o가 되고,\n", num01, num02);
  printf("입력하신 두 정수를 16진수로 나타내면 %x와 %x가 됩니다.\n", num01, num02);
  
  float num1;
  double num2;

  printf("두 개의 실수를 입력하세요 : ");
  scanf("%f %f", &num1, &num2);
  printf("입력하신 두 실수는 %f와 %f입니다.\n", num1, num2);
  printf("입력받은 두 실수 중 두 번째 double형 변수에는 전혀 다른 값이 저장되었습니다.\n\n");
  printf("다시 한 번 두 개의 실수를 입력하세요 : ");
  scanf("%f %lf", &num1, &num2);
  printf("입력하신 두 실수는 %f와 %f입니다.\n", num1, num2);
  printf("이번에는 두 실수 모두 제대로 저장되었습니다.\n");
  
  return 0;
}