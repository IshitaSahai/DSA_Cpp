class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size(), cntr=0, cntl=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L') cntl++;
            else if(moves[i]=='R') cntr++; 
        }
        int left=n-(cntr+cntl);
        if(cntr==cntl) return left;
        return abs(cntl-cntr)+left;
    }
};