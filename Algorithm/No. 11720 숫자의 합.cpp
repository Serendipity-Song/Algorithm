

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int num;
//    cin >> num;
//
//    char arr[num];
//
//    cin >> arr;
//    int sum = 0;
//
//    for (int i = 0; i < num; i++)
//    {
//        sum += arr[i] - '0';
//    }
//    //�ƽ�Ű�ڵ�⶧���� sum�� ���ؼ� '0'�� ����. 0���� �����ؿ�.
//
//    cout << sum << endl;
//
//    return 0;
//}



#include <iostream>
using namespace std;

int main()
{
    int n; // ������ ����
    char ch;

    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;  // char������ �޾����Ƿ�, �ƽ�Ű�ڵ� '0'�� ��, 48�� ����
    }

    cout << total << endl;

    return 0;
}
