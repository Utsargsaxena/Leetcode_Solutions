class Solution {
public:
    int maxProfit(vector<int>& a) {
        int currdif=0;
int maxdiff=0;
int lowest=a[0];
for(int i=1;i<a.size();i++){
    if(a[i-1]>a[i])
    {
    currdif=0; 
    lowest=min(lowest,a[i]);
    }
    
    else
    {    
    if(a[i]>lowest)
    currdif=a[i]-lowest;
    else
    currdif=a[i]-a[i-1];
        
    maxdiff=max(currdif,maxdiff);
    }
}
        return maxdiff;
    } 
};