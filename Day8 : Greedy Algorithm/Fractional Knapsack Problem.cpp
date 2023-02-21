
bool static comp(Item a, Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, comp);
        
        int curweight = 0; 
        double finalval = 0.0;
        
        for(int i=0; i<n; i++)
        {
            if(curweight + arr[i].weight <= W){
                curweight += arr[i].weight;
                finalval += arr[i].value;
            }
            else
            {
                int remain = W - curweight;
                finalval += (arr[i].value / (double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return finalval;
    }
        
};
