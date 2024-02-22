package string;

import java.util.Scanner;

public class StringTest {

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		
		String str1 = new String("abc");
		System.out.print("문자열 값 입력:");
		String str2 = scan.nextLine();
		
		System.out.println(str1.equals(str2));
		
		String str3 = "def";
		System.out.print("문자열 값 입력:");
		String str4 = scan.nextLine();
		
		System.out.println(str3.equals(str4));
	}

}
