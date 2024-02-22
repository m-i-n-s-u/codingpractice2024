package IfClassInAjit;

import java.util.*;

public class 두번째수 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int[] numberArray = new int[3];
		
		for(int i = 0 ; i < 3 ;i++) {
			numberArray[i] = scan.nextInt();
		}
		Arrays.sort(numberArray);
		System.out.println(numberArray[1]);

	}
	

}
