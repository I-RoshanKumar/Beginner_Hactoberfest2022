vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> a;
        int top=0,left=0,bottom=r-1,right=c-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++)
            a.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bottom;i++)
            a.push_back(matrix[i][right]);
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)
            a.push_back(matrix[bottom][i]);
            bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
            a.push_back(matrix[i][left]);
            left++;
            }
        }
        return a;
    }
