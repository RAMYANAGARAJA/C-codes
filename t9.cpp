class Solution {
  public:
    int isValid(string &s) {
        // code here
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            string current="";
            while(i<s.size() && s[i]!='.')
            {
                current.push_back(s[i]);
                i++;
            }
            if(current.empty()) return 0;
            if(current.size()>1 && current[0]=='0')
            {
                return 0;
            }
            for(char c : current)
            {
                if(!isdigit(c)) return 0;
            }
            int num=stoi(current);
            if(num<0 || num>255) return 0;
            count++;
        }
        return (count==4)?1:0;
    }
};
