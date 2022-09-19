//Recursive Approach:

int gcd(int a, int b) {
        if (a==0)
            return b;
        return gcd(b%a,a);
    }
int findGCD(vector<int>& nums) {
        
        int minele = *min_element(nums.begin(),nums.end());
        int maxele = *max_element(nums.begin(),nums.end());
        return gcd(maxele,minele);
    }


// Iterative Approach:

int gcd(int a, int b) {
        if (a==0)
            return b;
        if (b==0)
            return a;
        while (a != b) {
            if (a>b)
                a = a-b;
            else
                b = b-a;
        }
        return a;
    }
int findGCD(vector<int>& nums) {
        
        int minele = *min_element(nums.begin(),nums.end());
        int maxele = *max_element(nums.begin(),nums.end());
        return gcd(maxele,minele);
    }
