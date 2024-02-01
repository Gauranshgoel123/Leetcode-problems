class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0;i<image.size();i++){
            reverse(image[i].begin(),image[i].end());
        }
        //each row is now reversed
        //now convert 0 to 1 and vice versa
        for(int i=0;i<image[0].size();i++){
            for(int j=0;j<image[0].size();j++){
                image[i][j]^=1;
            }
        }
        return image;

    }
};