bool countChars(int a1[26], int a2[26]) {
        for (int i=0;i<26; i++) {
            if(a1[i]!=a2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1>n2)
            return false;
        
        int a1[26] = {0};
        int a2[26] = {0};
        
        for (int i=0; i<n1; i++) {
            a1[s1[i]-'a']++;
        }
        int i = 0;
        while (i<n1 && i<n2){
            a2[s2[i]-'a']++;
            i++;
        }
        
        if (countChars(a1,a2))
            return true;
        
        while (i<n2) {
            a2[s2[i]-'a']++;
            a2[s2[i-n1]-'a']--;
            if (countChars(a1,a2))
                return true;
            i++;
        }
        return false;
    }
