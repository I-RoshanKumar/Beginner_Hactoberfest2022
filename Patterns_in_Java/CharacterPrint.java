package Patterns;

public class CharacterPrint {
    public static void main(String[] args) {
        char c = 'A';
        for (int i = 1; i <= 13; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(c + " ");
                c++;
            }
            System.out.println();
        }
    }
}
