long long getmax(vector<int> arr){
    long long n = arr.size();
    long long ans = 0;
    priority_queue<int> q;

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            ans+=arr[i];
        }
        else{
            q.push(arr[i]);
        }
    }

    while(!q.empty()){
        long long k = 0;
        k += q.top();
        q.pop();
        if(q.empty()){
            break;
        }
        k+=q.top();
        q.pop();
        ans = max(ans, ans+k);
    }
    return ans;
}