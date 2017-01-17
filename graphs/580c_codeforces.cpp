#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,c;
    cin>>v>>c;
    int arr[v+1]={0};
    vector<int>t[v+2];
    for(int i=1;i<=v;i++){
        cin>>arr[i];
    }
    for(int i=0;i<v-1;i++){
        int a,b;
        cin>>a>>b;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    int visit[v+1]={0};
    int temp=c;
    stack<int>s;
    s.push(1);
    int concats[v+1]={0};
    vector<int>leaf;
    if(arr[1]==1){concats[1]=1;}
    while(s.empty()==0){
        int m=s.top();
        int q=0;
        visit[m]=1;
        s.pop();
        for(int j=0;j<t[m].size();j++){
            if(visit[t[m][j]]==0){
            s.push(t[m][j]);
            if(arr[t[m][j]]==1 || concats[m]<0){
                concats[t[m][j]]=concats[m]+1;
            }
            if(concats[t[m][j]]>c){
                concats[t[m][j]]=-10001;
            }
            q++;
            }
        }
        if(q==0){leaf.push_back(m);}
    }
    int ans=0;
    //cout<<concats[1]<<" "<<concats[3]<<endl;
    for(int h=0;h<leaf.size();h++){
        //cout<<leaf[h]<<endl;
        if(concats[leaf[h]]>=0){
            ans++;
        }
    }

    cout<<ans<<endl;


}
