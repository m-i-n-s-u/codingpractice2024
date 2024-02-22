package WhileClassAjit;

import java.util.Scanner;

public class colormixing {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int b=scan.nextInt(),g=scan.nextInt(),r=scan.nextInt(),cnt=0;
		
		for(int i=0;i<r;i++) {
			for(int j=0;j<g;j++) {
				for(int k=0;k<b;k++) {
					
					System.out.println(i+" "+j+" "+k+"\n");
					cnt++;
				}
			}
			
			
		}
		
		System.out.println(cnt);

	}

}
