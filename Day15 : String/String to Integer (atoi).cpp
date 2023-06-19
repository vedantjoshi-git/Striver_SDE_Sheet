class Solution {
public:
    int myAtoi(string s) {
    double ans = 0;
    bool negative = false;
    bool positive = false;
    int i=0;
    while(s[i] == ' ')
    {
        i++;
    }

    if(s[i] == '+') positive = true;
    if(s[i] == '-') negative = true;
    
    positive == true ? i++ : i;
    negative == true ? i++ : i;

    while(i<s.size() && s[i] >='0' && s[i]<='9')
    {
        ans = ans*10 + (s[i]-'0');
        i++;
    }

    if(negative == true) ans = -ans;

    if(ans > INT_MAX) ans = INT_MAX;
    else if(ans < INT_MIN) ans = INT_MIN;
    
    return ans;
    }
};
