package WhileClassAjit;

import java.util.Scanner;

public class Yaksu {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);

		
		int a = scan.nextInt();
		int b = scan.nextInt(); //숫자 2개를 입력받는다
		
		int count = 0,min=0,max=0,k;
		
		int[] arr1 = new int[10000];
		int[] arr2 = new int[10000];
		
		if(a>b) { // 큰수와 작은수 
			max = a;
			min = b;
		}
		else {
			max = b;
			min = a;	
		}
		
		for(int i=1; i<max ;i++) {
			if(max % i==0) {
				arr1[count++] = i;
			}
		}
		
		count = 0;
		
		for(int i=1;i<min;i++) { // 약수가 들어있을거임
			if(min % i==0) {
				arr2[count++] = i;
				}
			}
		
		/*for(int i=arr2.length-1 ; i>=0 ; i--) {
			k=arr2.find(arr1[i]);
			
		}*/
		
		
		
		}
	}
