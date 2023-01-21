class Solution {
public:
    void sortColors(vector<int>& a) 
    {
        int n = a.size();
        int low = 0;
    int high = n - 1;
    int mid = 0;

    while (mid <= high) 
    {
        switch (a[mid]) 
        {
 
        case 0:
            swap(a[low++], a[mid++]);
            break;
 
        case 1:
            mid++;
            break;
 
        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }
    }
};
