class Solution {
public:
    int fib(int n) {
        if(n==0||n==1) return n;
        int first = 0, second = 1, sum = 0;
        for(int i=2;i<=n;i++){
            sum = first+second;
            first = second;
            second = sum;
        }
        return sum;
    }
};