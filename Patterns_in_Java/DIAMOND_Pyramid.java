public class DIAMOND_Pyramid {

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.println("Enter the value of n");
        int n = sc.nextInt();

        // #2 (*******) 2 times
        for (int i = 1; i <= n; i++) {
            for (int sp = 1; sp <= n - i; sp++) {
                System.out.print(" ");
            }
            for (int st = 1; st <= (2 * i) - 1; st++) {
                System.out.print("*");
            }
            System.out.println();
        }

        for (int i = n; i >= 1; i--) {
            for (int sp = 1; sp <= n - i; sp++) {
                System.out.print(" ");
            }
            for (int st = 1; st <= (2 * i) - 1; st++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // #2 (*******) 1 times
        // java.util.Scanner sc = new java.util.Scanner(System.in);
        // System.out.println("Enter the value of n");
        // int n = sc.nextInt();
        // for (int i = 1; i <= n; i++) {
        // for (int sp = 1; sp <= n - i; sp++) {
        // System.out.print(" ");
        // }
        // for (int st = 1; st <= (2 * i) - 1; st++) {
        // System.out.print("*" + " ");
        // }
        // System.out.println();
        // }
        // n--;

        // for (int i = n; i >= 1; i--) {
        // for (int sp = 1; sp <= n - i+1; sp++) {
        // System.out.print(" ");
        // }
        // for (int st = 1; st <= (2 * i) - 1; st++) {
        // System.out.print("*" + " ");
        // }
        // System.out.println();
        // }
    }
}
