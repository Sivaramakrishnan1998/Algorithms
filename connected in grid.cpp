#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j;
    int x[100][100];
    int ro,co;
    cin>>ro>>co;
    for(i=0;i<ro;i++){
    	for(j=0;j<co;j++){
    		cin>>x[i][j];
    	}
    }
  int maxVal = 0;
    

    for(i=0;i<ro;i++){
    	for(j=0;j<co;j++){

            if(x[i][j]==0)continue;
            int cnt = 1;
            queue<std::vector<int> >q;
            
            q.push({i,j});
            x[i][j] = 0;
          
            while(!q.empty()){
                std::vector<int> top=q.front();
                q.pop();
                for(int dx=-1;dx<=1;dx++){
                    for(int dy=-1;dy<=1;dy++){

                        int nx = dx + top[0];
                        int ny = dy + top[1];


                        if(nx>=0 && ny>=0 && nx<ro && ny<co && x[nx][ny]==1){
                            x[nx][ny] = 0;
                            cnt++;
                             cout<<nx<<" "<<ny<<"\t";

                               q.push({nx,ny});
                        }

                    }
                }

            }
            maxVal = max(cnt,maxVal);
    		
    	}
    }

  cout<<maxVal;
    return 0;
}
