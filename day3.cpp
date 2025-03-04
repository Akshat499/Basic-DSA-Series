class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> flip;
        int n=image.size();
        for (int i=0;i<n;i++) {
            int p=image[i].size();
            for (int j=0;j<p;j++) {
                if(image[i][j]==0) image[i][j]=1;
                else image[i][j]=0;
            }
            for (int k=0;k<p/2;k++) {
                swap(image[i][k],image[i][p-k-1]);
            }
            flip.push_back(image[i]);
        }
        return flip;
    }
};

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n=dominoes.size();
        int count=0;
        int c1=1;
        for (int i=0;i<n;i++) {
            sort(dominoes[i].begin(),dominoes[i].end());
        }
        sort(dominoes.begin(),dominoes.end());
        
        for (int i=1;i<n;i++) {
            if(dominoes[i]==dominoes[i-1]) count+=(c1++);
            else c1=1;
        }
        return count;
    }
};
