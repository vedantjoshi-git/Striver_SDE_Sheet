class Solution {
public:
    string reverseWords(string s) {
        
        int i=0;
        string result;
        int N = s.length();
        while(i<N)
        {
            while(i<N && s[i] ==' ')
                {i++;}
            
            if(i>=N)
                {break;}
            
            int j=i+1;
            while(j<N && s[j] !=' ')
                {j++;}
            
            string word = s.substr(i,j-i);
            
            if(result.length() == 0)
                {result = word;}
            else
            {result = word + " " + result;}
            i=j+1;
        }
        return result;
    }
};
