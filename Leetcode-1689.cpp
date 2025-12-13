class Solution {
public:
    int minPartitions(string n) {
        int b=0;
        for(int i=0;i<n.size();i++){
             b=max(b,n[i]-'0');
        }
       return b;
    }
};