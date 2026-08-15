class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n=height.size();
        int mxar=0;
        int ar;
        stack<int>s;
        vector<int>rights(n),left(n);
//         Right Smaller
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && height[s.top()]>=height[i]){
                s.pop();
            }
            if(s.empty()){
                rights[i]=n;
            }else{
                rights[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
//        Left Smaller
        for(int i=0;i<n;i++){
            while(!s.empty() && height[s.top()]>=height[i]){
                s.pop();
            }
            left[i]=s.empty() ? -1 : s.top();
            s.push(i);
        }
        for (int i=0;i<n;i++) {
                ar = height[i]*(rights[i]-left[i]-1);
                mxar = max(mxar, ar);
            }

        return mxar;
    }
};