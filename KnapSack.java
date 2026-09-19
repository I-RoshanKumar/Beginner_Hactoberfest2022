//KnapSack(0-1) problem in java

//Solved using Recursion

public class KnapSack {
    public static void main(String[] args) {
        int[] weight = {1,3,5,6,7};
        int[] value = {1,8,18,22,28};
        int maxWeight = 11;
        System.out.println(knapSack(weight,value,5,maxWeight));
    }

    //using recursion
    static int knapSack(int[] w,int[] v,int n,int W){
        if(n <= 0){
            return 0;
        } else if (w[n-1] > W) {
            return knapSack(w,v,n-1,W);
        }else {
            return Math.max(knapSack(w,v,n-1,W),v[n-1] +
                    knapSack(w,v,n-1,W-w[n-1]));
        }
    }
}
