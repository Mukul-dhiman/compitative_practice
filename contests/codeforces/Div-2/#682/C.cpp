#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define loop(i,n) for(int i=0;i<n;i++)
#define iloop(a,i,n) for(int i=a;i<=n;i++)
#define bug(i) cout<<"debug at:"<<__LINE__<<" "<<i<<endl
#define out(i) cout<<i<<endl
#define mod 1000000007 //10e9+7
bool submit;
void pre(){
	FAST_IO;
    //code for pre celculations

}
int n,m;
vector<vector<int>> v(100,vector<int>(100,0)),a(100,vector<int>(100,0));
void check(int i,int j){
    if(i>0){
        if(j>0){
            if(v[i][j]==v[i-1][j] or v[i][j]==v[i][j-1])
        }
        else{

        }
    }
    else{
        if(j>0){

        }
    }
}
void solve(){
    cin>>n>>m;
    loop(i,n){
        loop(j,m){
            a[i][j]=0;
        }
    }
    loop(i,n){
        loop(j,m){
            cin>>v[i][j];
        }
    }
    loop(i,n){
        loop(j,m){
            check(i,j);
        }
    }
    loop(i,n){
        loop(j,m){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return; 
}
void test(){
	int t;
	cin>>t;
	iloop(1,i,t){
	    // cout<<"Case #"<<i<<": ";
	    solve();
	}	
	return;
}
int main(){
	// std::cout << std::fixed;
    // std::cout << std::setprecision(10);
	submit=0;
    pre();
    test();
    // solve();
    return 0;
}