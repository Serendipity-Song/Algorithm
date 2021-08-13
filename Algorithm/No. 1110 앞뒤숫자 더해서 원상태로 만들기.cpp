

#include<iostream> 
using namespace std; 


int main() {
	int num; //입력할 숫자 
	int firstnum; //첫째 자리 
	int secondnum;//둘째 자리 
	int sumnum; // 첫쨰자리 + 둘쨰자리 
	int result = 0; // 사이클을 위한 결과 
	int cnt = 0; // 사이클 횟수 알아보기
	cin >> num; // 숫자받기 
	if (num < 10)//10보다 작으면 
		num *= 10; result = num;



	while (1) {
		firstnum = result / 10; // 첫째 자리 숫자 
		secondnum = result % 10; // 둘째 자리 숫자(나머지연산 
		sumnum = firstnum + secondnum; // 더한 값 
		result = (secondnum * 10) + (sumnum % 10); // 
		cnt++; // 사이클 횟수 
		if (num == result) // 사이클 값과 입력값이 같을떄 탈출 
			break;
	}

	cout << cnt; // 총 갯수출력 }

}
