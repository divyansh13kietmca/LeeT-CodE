#define ll long long int
class Solution {
public:
    int mySqrt(int x) {
        if (x > 0)
        {
            ll n = 1;
            bool dec = false;

            while(1)
            {
                ll nx = (n + x/n) >> 1;
                if(n == nx || nx > n && dec)
                    break;
                dec = nx < n;
                n = nx;
            }
            return n;

        }
        else return x;
    }
};
