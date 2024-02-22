package input;

import java.util.Scanner;

public class scanner_in {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("문자열 값 입력");
		String str =scan.nextLine();
		System.out.println(str);
		
		System.out.print("정수 값 입력");
		int i =scan.nextInt();
		System.out.println(i);
		
		System.out.print("실수 값 입력");
		double d = scan.nextDouble();
		System.out.println(d);
		

	}

}
