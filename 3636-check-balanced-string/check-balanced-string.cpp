class Solution {
public:
    bool isBalanced(string num) {
        int even=0, odd=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                even+=(48-num[i]);
            }else{
                odd+=(48-num[i]);
            }
        }

        return even==odd;

    }
};