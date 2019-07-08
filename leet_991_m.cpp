class Solution {
public:
    int brokenCalc(int X, int Y) {
        int rst = 0;
        if(X >= Y)
            return X - Y;
        else
        {
            while(X < Y)
            {
                if(Y % 2 == 1)
                {
                    Y = Y + 1;
                    rst++;
                }
                else
                {
                    Y /= 2;
                    rst++;
                }
            }
            return rst + X - Y;
        }
    }
};
