package array;

public class ArrayCopy {

	public static void main(String[] args) {
		int[] array1 = {10,20,30,40,50};
		int[] array2 = {1,2,3,4,5};
		
		System.arraycopy(array1,0,array2,1,4);//arraycopy. arr의 0부터, arr2의 1부터 4개를 arr2에 copy.
		
		for(int i=0;i<array2.length;i++) System.out.println(array2[i]);

	}

}
