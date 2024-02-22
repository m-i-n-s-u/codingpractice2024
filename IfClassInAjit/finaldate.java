package IfClassInAjit;

import java.util.Scanner;

public class finaldate {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int year = scan.nextInt();
		int month= scan.nextInt();
		
		if(year%400==0 || (year%4==0) && (year%100)!=0) {
			
			if (month == 2) {
				System.out.println(29);
			} // 뒤 생략
			
		}
		
		

	}

}
