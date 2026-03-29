class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0;
        int bot = row - 1;

        while(top <= bot){
            int ro = (top + bot) / 2;
            if (target > matrix[ro][col-1]){
                top = ro + 1;
            }
            else if (target < matrix[ro][0]){
                bot = ro - 1;
            }
            else{
                break;
            }
        }

        if (!(top <= bot)){
            return false;
        }

        int ro = (top+bot)/2;
        int start = 0;
        int end = col-1;
        while ( start <= end){
            int mid = (start+end )/2;
            if (target > matrix[ro][mid]){
                start = mid+1;
            }
            else if (target < matrix[ro][mid]){
                end = mid-1;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};