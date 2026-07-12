class Solution {
public:
    // use two pointers l (start) and r (end) with running lMax, rMax.
    // Whichever side has the SMALLER height is safe to process, because the
    // taller side is guaranteed to have a wall >= that    smaller height somewhere,
    // so it can never be the limiting factor for water level on this side.
    // So: compare height[l] vs height[r] -> move pointer on smaller side ->
    // if current lMax/rMax > height at that pointer, water is  trapped (add diff),
    // else update lMax/rMax to this new taller wall. Repeat till l == r. O(n), O(1).
    
    int trap(vector<int>& height) {
    int n=height.size();
    int l=0;
    int r=n-1;
    int total=0;
    int lMax=0;
    int rMax=0;
    while(l<r){
        if(height[l]<=height[r]){
            if(lMax>height[l])
                total+=lMax-height[l];
            else
                lMax=height[l];
            l++;
        }
        else{
            if(rMax>height[r])
                total+=rMax-height[r];
            else
                rMax=height[r];
            r--;
        }
    }
    return total;
    }
};