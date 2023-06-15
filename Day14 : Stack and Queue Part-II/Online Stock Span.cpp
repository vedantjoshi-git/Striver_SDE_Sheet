class StockSpanner {
public:
    stack<pair<int, int>> sp;
    int index = -1;
    StockSpanner() {
    }
    
    int next(int price) {
        index++;
        while(!sp.empty() && sp.top().second <= price)
        sp.pop();

        if(sp.empty())
        {
            sp.push({index, price});
            return index+1;
        }
        int result = sp.top().first;
        sp.push({index, price});
        return index-result;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
