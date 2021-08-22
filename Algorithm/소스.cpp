

#include <iostream>
using namespace std;


int main()
{
    int n; //문자의 갯수

    char ch; //제시하는 합할 숫자들
    int total = 0; //총합

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        total += ch - '0';
     }

    cout << total << endl;

    return 0;
}

