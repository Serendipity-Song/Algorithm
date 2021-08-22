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