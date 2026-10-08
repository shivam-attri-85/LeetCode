class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int w=n-k;
        int s=0;
        for(int i=0;i<w;i++){
            s+=cardPoints[i];
        }
       int mini=s;
        int t=accumulate(cardPoints.begin(), cardPoints.end(), 0);
        for(int i=w;i<n;i++){
            s=s+cardPoints[i]-cardPoints[i-w];
            mini=min(mini,s);
        }
        return t-mini;
    }
};