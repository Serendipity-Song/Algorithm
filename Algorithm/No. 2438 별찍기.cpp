

//C언어에서는 *을 여러번 출력하는 게 불가능 한가봐...
//흑흑 ㅠ 
//별 찍기는 for 문 안에 for문을 넣어서 출력하는 방식을 사용하는 것 같다. 
//행과 열을 표현할 때, i와 j로 많이 사용하니 나도 표준 방식을 사용하겠다. 


#include <iostream>
using namespace std;



int main() {

	int n;
	cin >> n;
	
	int i;

		for (i=1;i<=n;i++) {
			//숫자가 증가한다. 

			
		
			
			for (int j=1;j<i+1;j++) {
				//한줄 안에 출력하는 별들--몇번조건
				cout << "*";
			}

			//줄바꿈
			cout<< "" << endl;

		}

}