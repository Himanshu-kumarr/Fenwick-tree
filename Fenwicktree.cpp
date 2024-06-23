  int query(int idx,vector<int> &bit){
    int sum=0;
    while(idx>0){
      sum+=bit[idx];
      idx-=((idx) & (-idx));
    }
    return sum;
  }
  void update(int idx,int val,vector<int> &bit){
    int n = bit.size()-1;
    while(idx<=n){
        bit[idx]+=val;
        idx+=((idx) & (-idx));
    }
  }
