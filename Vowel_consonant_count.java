import java.util.Scanner;

public class Vowels_consonant {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine().toLowerCase();
        int c=0;
        int v=0;

        char []a=s.toCharArray();
        for (char i:a){
            if(Character.isAlphabetic(i)){
                if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' ){
                    v++;
                }
                else {
                    c++;
                }
            }
        }
        System.out.println("vowel "+v);
        System.out.println("consonant "+c);

    }
}
