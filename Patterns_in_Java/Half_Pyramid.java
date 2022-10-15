// package Patterns;

public class Half_Pyramid {
    public static void main(String[] args) {
        // int n = 4;
        // int t = 1;
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= t; j++) {
        // System.out.print(j + " ");
        // }
        // System.out.println();
        // t++;

        // }

        int n = 4;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }

            System.out.println();

        }

    }
}
