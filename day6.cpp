//Ques-1
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int intialpivot=rounds[0];
        int pivot=rounds[rounds.size()-1];
        vector<int> mv;
        if(intialpivot<=pivot){
        for(int i=intialpivot-1;i<pivot;i++){
          mv.push_back(i+1);
        }
        }
        else{
            for(int i=1;i<=pivot;i++){
             mv.push_back(i);
           }

           for(int i=intialpivot;i<=n;i++){
             mv.push_back(i);
           }
        }
        return mv;
    }
};

//TC:O(n)
//SC:O(1)


//Ques-02


class Solution {
public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int> res;
        res.push_back(1);
        
        for (int i = 1; i < arr.size(); i++) {
            int j = i - 1;
            
            while (j >= 0 && arr[i] >= arr[j]) {  
                j = j - res[j];  
            }
            
            res.push_back(i - j);
        }
        return res;
    }
};

//TC:O(n)
//SC:O(1)
