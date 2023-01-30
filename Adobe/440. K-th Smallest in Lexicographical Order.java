class Solution {
    public int findKthNumber(int n, int k) {
        int currentnumber = 1;
        k = k-1;
        while(k>0){
            int steps = countsteps(n,currentnumber,currentnumber+1);
            if(steps<=k){
                currentnumber += 1;
                k -= steps;
            }else{
                currentnumber *= 10;
                k -= 1;
            }
        }
        return currentnumber;
    }
    public int countsteps(int n,long currentnumber,long nextnumber){
        int steps = 0;
        while(currentnumber <= n){
            steps += Math.min(n+1,nextnumber) - currentnumber;
            currentnumber *= 10;
            nextnumber *= 10;
        }
        return steps;
    }
}
