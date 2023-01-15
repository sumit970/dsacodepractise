 vector<int>nextsmallerElement(vector<int>&arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 &&arr[s.top()]>=curr){
            s.pop();
        }
        //ans is stack ka top;
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
  } 
   vector<int>prevsmallerElement(vector<int>&arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 &&arr[s.top()]>=curr){
            s.pop();
        }
        
        //ans is stack ka top;
        ans[i]=s.top();
        s.push(i);

    }

    return ans;
  } 
 

 int len=n;
        vector<int>next;
        next=nextsmallerElement(arr,len);
        
        vector<int>prev;
        prev=prevsmallerElement(arr,len);
        int maxarea=INT_MIN;
        for(int i=0;i<n;i++){
            
            int l=arr[i];
            
            if(next[i]==-1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            
            int area=l*b;
            
            maxarea=max(maxarea,area);
        }
        return maxarea;
        
    }





