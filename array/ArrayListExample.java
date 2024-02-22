package array;

import java.security.AlgorithmConstraints;

public class ArrayListExample {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayList<String> al =new ArrayList<String>();
		
		al.add("박"); // 요소 추가
		System.out.println(al);
		
		al.add(0,"이"); //요소 삽입
		System.out.println(al); 
		
		System.out.println(al.get(0)); //인덱스 값 반환
		
		al.set(3,"정");//값 변경
		System.out.println(al);
		
		al.add("박");
		System.out.println(al.indexOf("박")); // 인덱스로 값 찾아서 반환********** 첫번째
		System.out.println(al.lastIndexOf("박")); // 값 찾아 반환************* 마지막
		
		al.remove(4); // 요소 삭제
		al.remove("정"); //"정" 요소 삭제. 한개만
		
		System.out.println(al.contains("정")); // 포함하는가?
		
		al.clear(); //배열 비우기
		
		System.out.println(al.isEmpty); //비었는가
		
		ArrayList<String> al1 = new ArrayList<String>();
		al1.add("박");
		
		ArrayList<String> al2 = new ArrayList<String>();
		al2.add("최");
		
		al1.addAll(al2);// 배열 합치기
		System.out.println(al1.containsAll(al2)); // 한 리스트가 한 리스트를 포함하는가
		al1.removeAll(al2) //리스트 해당 요소 지우기
		
		System.out.println(al1.size()); //요소 개수 반한
		
		
	}

}
