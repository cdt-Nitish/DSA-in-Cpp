class Solution {
public:
    int smallestNumber(int n, int t) {

        int num = n;
        while (1) {
            int temp = num;
            int product = 1;
            while (temp > 0) {
                int dig = temp % 10;
                product *= dig;
                temp /= 10;
            }
            if (product % t == 0)
                return num;
        
        num++;
    }

    return num;
}
}
;