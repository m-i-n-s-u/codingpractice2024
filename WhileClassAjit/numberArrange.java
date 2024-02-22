package WhileClassAjit;

import java.util.Scanner;

public class numberArrange {

	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		
		int start = scan.nextInt();
		int multiple = scan.nextInt();
		int sequence = scan.nextInt();
		
		for(int i=0; i<sequence-1;i++) {
			start*=multiple;
		}
		
		System.out.println(start);

	}

}
