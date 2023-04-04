int maxProfit(int* prices, int pricesSize){
    int *l, *r;
    int t = 1;
    int profit = 0;
    int fprofit = 0;
    l = prices;
    r = prices+t;
    while (t<= (pricesSize-1))
    {
        if (*r <= *l)
        {
            *l = *r;
            t++;
        }
        else
        {
            profit = *r - *l;
            fprofit = fprofit + profit;
            t++;
            *l = *r;
        }
        
    }
    return fprofit;

}