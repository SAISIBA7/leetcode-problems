class Solution {
public:
    int maxArea(vector<int>& height) {
        int Marea=0;
        int L=0;
        int R=height.size()-1;
        for(int i =0;i<height.size();i++){
            Marea= max(Marea,(R-L) * min(height[R],height[L]));
            if(height[L]<height[R]){
                L++;
            }
            else{
                R--;
            }
        }
        return Marea;
    
    }
};