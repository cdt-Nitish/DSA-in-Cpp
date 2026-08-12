class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
         long long sum=0;
         int large, small;
        // int mod=(int)(1e9+7);
        for(int i=0;i<arr.size();i++){
           large=arr[i];
           small=arr[i];
            for(int j=i+1;j<arr.size();j++){
                small=min(small,arr[j]);
                large=max(large,arr[j]);
                int temp =large - small;
                sum=(sum+temp);
            }
        }
        return sum;
    }
};