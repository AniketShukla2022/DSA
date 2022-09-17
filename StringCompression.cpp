int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        int i = 0;
        while (i<n) {
            int j = i+1;
            while (j<n && chars[j]==chars[i]) {
                j++;
            }
            chars[idx] = chars[i];
            idx++;
            int count = j-i;
            if (count>1) {
                string stringCount = to_string(count);
                for (char c:stringCount) {
                    chars[idx] = c;
                    idx++;
                }
            }
            i = j;
        }
        return idx;
    }
