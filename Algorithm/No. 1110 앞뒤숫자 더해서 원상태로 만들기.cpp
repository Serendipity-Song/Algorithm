
#include <iostream>
using namespace std;


int main() {


	int num; // 처음 입력받은 값.
	int first_num; // 앞자리 수
	int second_num; // 뒷자리 수
	int sum_num; //더해준 값
	int result = 0;// 입력값=최종값을 판별하기 위한 결과값
	int cir=0; // 반복 횟수 (출력값)

	cin >> num; //숫자 받기


	while (1) {		

			//숫자 10으로 나눈 몫을 first_num
			first_num = result / 10;
			//숫자 10으로 나눈 나머지를 second_num에 지정
			second_num = result % 10;


			//새로운 수를 sum_num에 넣어주기
			sum_num = first_num + second_num;

			result = (second_num*10) + (sum_num/10);

			cir++;

			if (num == result)
				break;
			
			
		}
		
		cout << cir << endl;
}


//#include<iostream> 
//using namespace std; 
//
//
//int main() {
//	int num; //입력할 숫자 
//	int firstNum; //첫째 자리 
//	int secondNum;//둘째 자리 
//	int sumNum; // 첫쨰자리 + 둘쨰자리 
//	int result = 0; // 사이클을 위한 결과 
//	int cnt = 0; // 사이클 횟수 
//	cin >> num; // 숫자받기 
//	if (num < 10)//10보다 작으면 
//		num *= 10; result = num;
//
//
//
//	while (1) {
//		firstNum = result / 10; // 첫째 자리 숫자 
//		secondNum = result % 10; // 둘째 자리 숫자(나머지연산 
//		sumNum = firstNum + secondNum; // 더한 값 
//		result = (secondNum * 10) + (sumNum % 10); // 
//		cnt++; // 사이클 횟수 
//		if (num == result) // 사이클 값과 입력값이 같을떄 탈출 
//			break;
//	}
//
//	cout << cnt; // 총 갯수출력 }
//
//}
