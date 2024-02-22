package array;

import java.util.Scanner;

public class TwoDimension3 {

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
		int[][] arr =new int[2][3];
		
		System.out.println("정수 값 입력:");
		
		for(int i=0; i<arr.length; i++) {
			for(int j=0 ;j<arr[i].length; j++) {
				arr[i][j] = scan.nextInt(); 
			}
		}
		
		for(int i=0;i<arr.length;i++) {
			for(int j=0;j<arr[i].length;j++) {
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}

	}

}
