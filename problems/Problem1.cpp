#include <bits/stdc++.h>
using namespace std;
#define max_number 1000

int main(){
    int sum = 0;
    for (int num = 1; num < max_number; num++) {
        if (num % 3 == 0 or num % 5 == 0) {
            sum += num;
        }
    }
    cout << sum << endl;
}