import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
            Scanner in=new Scanner(System.in);
            int n=in.nextInt();
            int arr[]=new int[n];
        int rear=-1;
        int front=0;
        for(int i=0;i<n;i++)
            {
            
            int ops=in.nextInt();
            if(ops ==1)
                {
                int num=in.nextInt();
                arr[++rear]=num;
            }
            else if (ops==2)
                {
                int num=arr[front++];
            }
            else 
                {
                System.out.println(arr[front]);
            }
        }
        
        
        
        
    }
}
