class Solution {
public:
    int subtractProductAndSum(int m) {
    int r,s=0,b=1;
    
    while(m!=0){
        r=m%10;
        b=b*r;
        s=s+r;
        m=m/10;
    }
   return b-s;

    }
    
};