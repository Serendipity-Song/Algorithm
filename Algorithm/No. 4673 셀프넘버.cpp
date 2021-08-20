
//
//#include <iostream>
//using namespace std;
//int main(void) {
//    int arr[10000] = { 1, };
//    int temp;
//    for (int i = 1; i < 10000; i++) {
//        if (i < 10) {
//            arr[i + i] = 1;
//            continue;
//        }
//        else if (i < 100) {
//            arr[i + i / 10 + i % 10] = 1;
//            continue;
//        }
//        else if (i < 1000) {
//            arr[i + i / 100 + i % 100 / 10 + i % 10] = 1;
//            continue;
//        }
//        else if (i < 10000) {
//            temp = i + i / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10;
//            if (temp < 10000) {
//                arr[temp] = 1;
//                continue;
//            }
//        }
//    }
//
//    for (int i = 1; i < 10000; i++)
//        if (!arr[i])
//            cout << i << "\n";
//}




//
//#include <iostream>
//using namespace std;
//
//
//
//int main(void) {
//    int arr[10000] = { 1, };
//    int temp;
//    for (int i = 1; i < 10000; i++) {
//        if (i < 10) {
//            arr[i + i] = 1;
//            continue;
//        }
//
//
//        else if (i < 100) {
//            arr[i + i / 10 + i % 10] = 1;
//            continue;
//        }
//
//        else if (i < 1000) {
//            arr[i + i / 100 + i % 100 / 10 + i % 10] = 1;
//            continue;
//        }
//
//
//        else if (i < 10000) {
//            temp = i + i / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10;
//            if (temp < 10000) {
//                arr[temp] = 1;
//                continue;
//            }
//        }
//    }
//
//
//    for (int i = 1; i < 10000; i++)
//        if (!arr[i])
//            cout << i << "\n";
//}



#include <iostream>

using namespace std;

int d(int n) {
    int sum = n;

    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}


int main() {

    bool arr[10001];
    int tmp;

    for (int i = 1; i <= 10000; i++) {
        arr[i] = true;
    }

    for (int i = 1; i <= 10000; i++) {
        tmp = d(i);
        if (tmp <= 10000) {
            arr[tmp] = false;
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (arr[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}