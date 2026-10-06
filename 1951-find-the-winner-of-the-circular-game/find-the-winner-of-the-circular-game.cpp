class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool>place(n,true);
        int killed=0,i=0,turn=1;
        while(killed!=n-1){
            if(turn == k ){
                while(place[i]==0){i=(i+1)%n;}
                cout<<i+1<<endl;
                place[i]=0;
                i=(i+1)%n;
                killed++;
                turn = 1;
            }
            else{
                while(place[i]==0){i=(i+1)%n;}
                turn++;
                i=(i+1)%n;
            }
        }
        for(int i=0;i<n;i++){
            if(place[i]){return i+1;}
        }
        return 0;
    }
};