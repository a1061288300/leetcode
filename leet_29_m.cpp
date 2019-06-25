class Solution {
public:
    #define MAX 2147483647
    int divide(int dividend_i, int divisor_i) {
        long long dividend = dividend_i;
        long long divisor = divisor_i;
        long long rst = 0;
        bool flag = true;

        if((dividend < (long long)0) != (divisor < (long long)0))
            flag = false;
        
        dividend = dividend > 0 ? dividend : (~dividend + 1);
        divisor = divisor > 0 ? divisor : (~divisor + 1);
        
        
        for(int i = 31; i >= 0; i--)
        {
            if((dividend >> i) >= divisor)
            {
                rst += (long long)1 << i; // 这里之前没将 1 转换为 long long ,导致 1 << 31 溢出，用例：-2147483648，-1
                dividend -= divisor << i;
            }
        }
        
        if(!flag)
        {
            rst = 0 - rst;
        }
        if(rst > MAX)
            rst = MAX;
        
        return rst;
    }
};
