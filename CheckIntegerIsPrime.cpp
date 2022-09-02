//Brute-Force Approach

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout <<"Enter the number: "<< endl;
    cin >> N;
    int flag = 0;
    for(int i=2; i<N; i++) {
        if(N%i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 1) 
        cout << N << " is not prime" <<endl;
    else
        cout << N << " is prime" <<endl;
    return 0;
}
