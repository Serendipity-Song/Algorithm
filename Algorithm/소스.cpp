

#include <iostream>
using namespace std;


int main()
{
    int n; //������ ����

    char ch; //�����ϴ� ���� ���ڵ�
    int total = 0; //����

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        total += ch - '0';
     }

    cout << total << endl;

    return 0;
}

