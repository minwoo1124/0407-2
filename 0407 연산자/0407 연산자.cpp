// 0407 연산자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    int left_value = 14;
    int right_value = 3;

    cout << "+ : " << left_value + right_value << endl;
    cout << "- : " << left_value - right_value << endl;
    cout << "* : " << left_value * right_value << endl;
    cout << "/ : " << left_value / right_value << endl;
    cout << "% : " << left_value % right_value << endl;

    

    left_value += right_value; //left_value = left_value + right_value;
    cout << "+= : " << left_value  << endl; //17
    left_value -= right_value;
    cout << "-= : " << left_value << endl; //14
    left_value *= right_value;
    cout << "*= : " << left_value << endl; //42
   
    left_value /= right_value;
    cout << "/= : " << left_value << endl; //14
   
    left_value %= right_value;
    cout << "%= : " << left_value << endl; //2


    
    left_value++; 
    
    cout << left_value++ << endl;  //출력 : 3, 메모리 : 4
   
    ++left_value; //5
    
    cout << ++left_value << endl;  // 메모리 :6  , 출력 : 6
    
    left_value--;  //5
    cout << left_value-- << endl;  // 출력 :5 , 메모리 4
   
    --left_value; 
    cout << --left_value << endl; // 메모리 :2 출력 : 2


     
    int customer_age;
    cout << "고객님의 나이를 입력하세요 : ";
    cin >> customer_age;
    
    cout << "고갱님은 미성년자가" << (customer_age <= 19) << "입니다" << endl;
    cout << "고갱님은 주민등록발급대상" << (customer_age == 20 ) << "입니다" << endl;
    cout << "고갱님은 아홉수" << (customer_age % 10 ==9 ) << "입니다" << endl;

} 
/*
연산자
데이터를 가공(연산)하는 모든 명령에 필요한 것들
1) 어떤 종류의 연산자들이 있는지?
2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

1. 사칙연산 : 산술연산자 (좌측부터 연산)
+ : 더하기
- : 떄기
* : 곱하기
 / : 나누기   11/3 >> 3
 % : 나머지   11%3 >> 2
 *, /, %, +, -
 
 2. 대입연산자 (우측부터 연산)
 = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다)

 3. 복합대입연산자
 += : a += b; -> a = a + b;
 -= : a -= b; -> a = a - b;
 *= : a *= b; -> a = a * b;
 /= : a /= b; -> a = a / b;
 %= : a %= b; -> a = a % b; (a와 b는 정수형타입이여야 한다.)
 
 4. 증감연산자 
 특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
 변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

 5. 관계연산자
 두 값을 비교한 결과가 참인지(1, true) 거짓(0, false)인지 반환하는 연산자 

 < : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
 > : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
 <= :
 >= :
 == : 왼쪽 항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다. 
 != : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.

 실습. 
 고객의 나이를 입력받아서 미성년자 (19세 이하)이면 ture를 출력
 성인이면 false를 출력.

 아까 입력 받은 나이를 기준으로, 주민등록증 발급대상이면(20살만) true를 아니면 false를 출력.

 + 아홉수(1의 자리가 9인수)인지 확인해서 true, false를 출력

*/
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
