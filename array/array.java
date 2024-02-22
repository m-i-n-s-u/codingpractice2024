package array;

import java.util.Scanner;

public class array {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		String[] arr = new String[5];
		
		System.out.print("문자열 값 입력:");
		for(int i=0;i<arr.length;i++) {
			arr[i] = scan.nextLine();
		}
		
		for(int i=0; i<arr.length; i++) {
			System.out.println(arr[i]+ " " );
		}

	}

}
