int countSmaller(vector<int>& arr, int n){
    int low = 0, high = arr.size()-1;
    while(low<=high){
        int mid = (low+high)>>1;
        if(arr[mid]<=n)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return low;
}

int Solution::findMedian(vector<vector<int> > &matrix) {
    int low = 1, high = 1e9;
    int n = matrix.size();
    int m = matrix[0].size();
    while(low<=high){
        int mid = (low+high)>>1;
        int count = 0;
        for(int i=0;i<n;i++){
            count+=countSmaller(matrix[i], mid);
        }
        if(count<=(n*m)>>1)
            low = mid + 1;
        else 
            high = mid - 1;
    }
    return low;
}
