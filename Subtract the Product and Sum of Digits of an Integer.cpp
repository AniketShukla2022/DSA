#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    while(n>0) {
        product =  product * (n%10);
        sum = sum + (n%10);
        n = n/10;
    }
    return (product-sum);
}

int main(){
    int N;
    cout <<"Enter the Number: ";
    cin >> N;
    cout << subtractProductAndSum(N) << endl;
    return 0;
}
