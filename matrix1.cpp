/*The n-queens puzzle is the problem of placing n queens on a (n × n) chessboard such that no two queens can attack each other. Note that two queens attack each other if they are placed on the same row, the same column, or the same diagonal.

Given an integer n, find all distinct solutions to the n-queens puzzle.
You can return your answer in any order but each solution should represent a distinct board configuration of the queen placements, where the solutions are represented as permutations of [1, 2, 3, ..., n]. In this representation, the number in the ith position denotes the row in which the queen is placed in the ith column.
For eg. below figure represents a chessboard [3 1 4 2].*/

class Solution {
    private:
    bool issafe(vector<int> &current, int row, int col)
     {
         for(int c=0;c<current.size();c++)
         {
             int r=current[c];
             if(abs(r-row)==abs(c-col))
             {
                 return false;
             }
         }
         return true;
     }
     void backtrack(int n, int col, vector<int> &current, vector<bool> &used,vector<vector<int>> &solution)
     {
         if(col==n)
         {
             solution.push_back(current);
             return;
         }
         for(int row=1;row<=n;row++)
         {
             if(!used[row-1] && issafe(current,row,col))
             {
                 used[row-1]=true;
                 current.push_back(row);
                 backtrack(n,col+1,current,used,solution);
                 current.pop_back();
                 used[row-1]=false;
             }
         }
     }
  public:
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> solution;
        vector<int>current;
        vector<bool> used(n,false);
        backtrack(n,0,current,used,solution);
        return solution;

    }
};
