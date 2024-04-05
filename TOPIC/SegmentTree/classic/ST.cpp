const int N=1e5+7;
struct STree{
    int T[4*N];
    void modify(int n){
    }
    void init(const vector<int> &a,int n,int L,int R){
        if(L==R){
            T[n]=a[L];
            return;
        }
        int M=(L+R)>>1;
        int x=n<<1;
        init(a,x,L,M); 
        init(a,x|1,M+1,R);
        modify(n);
    }
    void update(int n,int L,int R,int I,int val){
        if(L==R){
            T[n]=val;
            return;
        }
        int M=(L+R)>>1;
        int x=n<<1;
        if(I<=M) update(x,L,M,I,val);
        else update(x|1,M+1,R,I,val);
        modify(n);
    }
};
