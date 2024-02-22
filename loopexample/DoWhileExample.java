package loopexample;

import java.util.Scanner;

public class DoWhileExample {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		System.out.println("정수갑 입력");
		int num=scan.nextInt();
		int i=1;
		int sum=0;
		
		do {
			sum+=i;
			i++;
		}while(i<=num);
		
		System.out.println("1부터" + num+"까지의 합은"+sum+"입니다");

	}

}
