import java.util.Scanner;
public class String_Palindrome {
static void check_palindrome(String b,String in)
{
	boolean x=in.equals(b);
	if(x)
	{
		System.out.println("Given String is a Palindrome");
	}
	else
	{
		System.out.println("Given String is  not a Palindrome");
	}
}
public static void main(String[] args) {
		Scanner n = new Scanner(System.in);
		System.out.print("Enter Your String :");
		String s= n.nextLine();
		StringBuffer sn= new StringBuffer(s);
		StringBuffer t=sn.reverse();
		String a= t.toString();
		check_palindrome(a,s);
	}
}
