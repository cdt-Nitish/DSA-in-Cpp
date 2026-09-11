class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int count=0;
        if(1000<=n<10000){
            count=n-1000;
        }else {
            count=n-10000;
        }

        return count+1;
    }
};