string removeDuplicates(string s) {
        int n = s.length();
        if (n==1)
            return s;
        string str = "";
		for(int i =0; i<s.size(); i++){
			char ch = s[i];
			if(str.size() != 0 && str.back() == ch){
				str.pop_back();
			}else{
				str.push_back(ch);
			}
		}
		return str;
    }
