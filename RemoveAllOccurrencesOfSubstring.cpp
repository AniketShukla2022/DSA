string removeOccurrences(string s, string part) {
        while (s.find(part)!=std::string::npos){
            s.erase(s.begin()+s.find(part),s.begin()+s.find(part)+part.length());
        }
        return s;
    }
