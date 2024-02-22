// BEATS 55$ 
// CPP CODE

// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
        
// //         The town judge trusts nobody.
// // Everybody (except for the town judge) trusts the town judge.

//     vector<int> trusting (n+1,0);
//     vector<int> trusted (n+1,0);
//     for(auto i: trust){
//         trusting[i[0]]++;
//         trusted[i[1]]++;
//     }
//     int ans=-1;
//     for(int i=1;i<=n;i++){
//         if(trusting[i]==0 && trusted[i]==n-1){
//             ans=i;
//         }
//     }
//     return ans;
//     }
// };

// RUN TIME 2MS BEATS 99.85%
// JAVA SOLUTION
    class Solution {
    public int findJudge(int n, int[][] trust) {
        int ans[]=new int[n+1];
        for(int i=0;i<trust.length;i++){
            ans[trust[i][0]]++;
        }
        int i=1;
        for(i=1;i<n+1;i++){
            if(ans[i]==0){
                break;
            }
        }
        int count=0;
        for(int j=0;j<trust.length;j++){
            if(trust[j][1]==i){
                count++;
            }
        }
        if(count==n-1){
            return i;
        }
        else{
            return -1;
        }
    }
}
