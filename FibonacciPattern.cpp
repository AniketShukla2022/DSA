// Print the fibonacci pattern for an integer N

#include<iostream>
using namespace std;

int main(){
    int N;
    cout <<"Enter value of N: ";
    cin >> N;
    int a = 0;
    int b = 1;
    cout << a <<" "<< b <<" ";
    for (int i = 1; i <= N; i++) {
        cout << (a+b) << " ";
        int c = (a+b);
        a = b;
        b = c;
    }
    return 0;
}
