class TrappingRainWater {
    public int trap(int[] height) {
       int st = 0, en = height.length - 1; 
       int ans = 0;
       int lm = height[st], rm = height[en];
       while(st <= en) {

           int wl = Math.min(lm, rm);

           if(height[st] < height[en]) {
           ans += Math.max(0, wl - height[st]);
               st++;
           }
           else {
           ans += Math.max(0, wl - height[en]);
               en--;
           }
           if(st > en) break;
           lm = Math.max(lm, height[st]);
           rm = Math.max(rm, height[en]);
       }
       return ans;
    }
}