package IfClassInAjit;

import java.util.Scanner;

public class 만능휴지통 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int bigtrash = scan.nextInt();
		int trash = (bigtrash %10 * 10 + bigtrash/10)*2;			
		
		if(trash>100) {
			trash %= 100;
		}
		
		if (trash<50) System.out.println(trash+"\n"+"GOOD");
		else System.out.println(trash+"\n"+ "OH MY GOD");

	}

}
