#include <bits/stdc++.h> 
#include <cmath>
double findNthRootOfM(int n, int m) {
	// Write your code here.

    double low = 0;
    double high = m;
    double mid;
    double ep = 1e-7;
    while((high - low) > ep){
        mid = (high+low)/2.0;
        if(pow(mid,n) == m){
            return mid;
        }
        if(pow(mid,n) > m){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    // you can also return high value, it will give the same result
    return low;
}
