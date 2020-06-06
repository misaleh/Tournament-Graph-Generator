//misaleh
//c++17 template for codeforces
#include <bits/stdc++.h>

using namespace std;

/*macros*/
#ifdef ONLINE_JUDGE
#define DO_DEBUG(x)
#define DO_EXEC(x) x
#else
#define DO_DEBUG(x) x
#define DO_EXEC(x)  94
#endif /*ONLINE_JUDGE*/

#define all(v)			((v).begin()), ((v).end())
#define SIZE(v)			int((v).size())
#define READSTR(x)			getline(cin,x)
#define REP(i, n) for (int i = 0; i < n; i++)
#define FILE_INPUT() 	freopen( "input.txt", "r", stdin)
#define FILE_OUTPUT()   freopen( "output.txt", "w", stdout)
#define IOS()       DO_EXEC(ios_base::sync_with_stdio(0);cin.tie(NULL))

template <typename T> constexpr string_view gtype(){string_view s=__PRETTY_FUNCTION__;return string_view(s.data()+45,s.find(';', 45)-45);}
#define GET_TYPE(x)      gtype<decltype(x)>()
#define PRINTLN(x)       DO_DEBUG(REP(i,x) {cout<<'-';} cout<<endl))
#define PRINTC(c)        DO_DEBUG(cout<<"[DEBUG] "<<GET_TYPE(c)<<" "<<#c<<':'<<endl; for(auto vv:c) {cout<<vv<<" ";} cout<<endl)
#define PRINTV(v)        DO_DEBUG(cout<<"[DEBUG] "<<GET_TYPE(v)<<" "<<#v<<": "<<v<<endl)
#define PRINTA(a,n)      DO_DEBUG(cout<<"[DEBUG] "<<GET_TYPE(a)<<" "<<#a<<":"<<endl; REP(i,n) {cout<<arr[i]<<" ";} cout<<endl)
#define CHECKPOINT(x)    DO_DEBUG(cout<<"[CHECKPOINT] => "<<x<<" <= ["<<__FUNCTION__<<"] : "<<__LINE__<<endl)
#define START_TIME(x)    DO_DEBUG(auto start##x = std::chrono::high_resolution_clock::now())
#define END_TIME(x)      DO_DEBUG(auto finish##x = std::chrono::high_resolution_clock::now();) \
                         DO_DEBUG(auto duration##x = std::chrono::duration_cast<std::chrono::milliseconds>(finish##x - start##x));\
                         DO_DEBUG(cout<<"Elapsed["<<#x<<"] = "<<duration##x.count()<<" ms"<<endl)

/*typedefs*/
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main() {
    int n;
    cout<<"Enter n\n";
    cin>>n;
    int mx= ((n-1)/2);
    //print nodes to view graph easily on csacademy.com/app/graph_editor/
    for(int i = 0; i < n ; ++i)
        cout<<i<<endl;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 1 ; j <= mx ; ++j)
        {
            cout<<i<<" "<<(i+j)%n<<endl;
        }
    }
    //incase of even number of nodes
    //this will not be regular graph
    if(!(n&1))
    {
        for(int i = 0 ; i < (n/2) ; ++i)
        {
            cout<<i<<" "<<(i+(n/2))<<endl;
        }
    }
    return 0;
}
