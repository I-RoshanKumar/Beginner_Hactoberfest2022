long long trappingWater(int arr[], int n){
        vector<int> v1,v2;
        int result=INT_MIN;
        for(int i=0;i<n;i++){
            result=max(result,arr[i]);
            v1.push_back(result);
        }
        int r=INT_MIN;
        for(int i=n-1;i>=0;i--){
            r=max(r,arr[i]);
            v2.push_back(r);
        }
        reverse(v2.begin(),v2.end());
        long long ans=0,res=0;
        for(int j=1;j<n-1;j++){
            res=min(v1[j],v2[j]);
            ans+=res-arr[j];
        }
        return ans;
    }
