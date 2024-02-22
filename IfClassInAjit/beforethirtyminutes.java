package IfClassInAjit;

import java.util.Scanner;

public class beforethirtyminutes {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		
		if(a == 0 && b < 30) {
			a=24;
			b=30+b;
		}
		
		else if(b<30) {
			a-=1;
			b=30+b;
		}
		
		else b-=30;
		
		
		System.out.println(a+"\t"+ b);
}}
