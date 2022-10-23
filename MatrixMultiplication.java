import java.util.Scanner;
public class MatrixMultiplication {

	public static void main(String[] args) {
    
int m, n, p, q;
		
		//array declaration
		int [][] X = new int [10][10];
		int [][] Y = new int [10][10];
		
		Scanner sc = new Scanner (System.in);
    
    
		System.out.print("Enter Dimensions(m*n) of matrix X: ");
    //input from user
		m = sc.nextInt();
		n = sc.nextInt();
    
		System.out.print("Enter Dimensions(p*q) of matrix Y: ");
    //input from user
		p = sc.nextInt();
		q = sc.nextInt();
		
		if(n==p) 
		{
			System.out.print("Enter "+ m*n + " integers of Matrix X: ");
			for(int i=0 ; i<m ; i++) {
				for(int j=0 ; j<n ; j++) {
					X[i][j] = sc.nextInt();
				}
			}
			System.out.print("Enter "+ p*q + " integers of Matrix Y: ");
			for(int i=0 ; i<p ; i++) {
				for(int j=0 ; j<q ; j++) {
					Y[i][j] = sc.nextInt();
				}
			}
			
			System.out.println("\nMatrix X = ");
			for(int i=0; i<m;i++) {
				for(int j=0; j<n;j++) {
					System.out.print(X[i][j]+" ");
				}
				System.out.println();
			}
			System.out.println("\nMatrix Y = ");
			for(int i=0; i<p;i++) {
				for(int j=0; j<q;j++) {
					System.out.print(Y[i][j]+" ");
				}
				System.out.println();
			}
			int [][] C = new int[m][q];
			System.out.println("\nProduct Matrix = ");
			for(int i=0; i<m; i++) {
				for(int j=0; j<q; j++) {
					for(int k=0; k<p;k++) {
						C[i][j] += X[i][k]*Y[k][j];
					}
					System.out.print(C[i][j]+" ");
				}
				System.out.println();
			}
		}
		else
			System.out.println("\nMatrix Multiplication not possible...");
		
		
		sc.close();


	}

}
