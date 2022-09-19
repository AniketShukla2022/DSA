int countPrimes(int n) {
        // Sieve of Eratosthenes
        
        vector<bool> prime(n+1,true);
        prime[0] = prime[n] = false;
        
        int cnt = 0;
        for (int i=2; i<n; i++) {
            if (prime[i]) {
                cnt++;
                for (int j=2*i; j<n; j=j+i) {
                    prime[j] = false;
                }
            }
        }
        return cnt;
    }
    
    // Time-Complexity: O(n*log(log(n)))
