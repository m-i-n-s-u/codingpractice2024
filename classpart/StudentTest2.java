package classpart;

public class StudentTest2 {

	public static void main(String[] args) {
		Student student1 = new Student();
		student1.studentName ="안연수";
		
		Student student2 = new Student();
		student2.studentName = "안승연";
		
		System.out.println(student1);
		System.out.println(student2); //student1, student2는 "포인터" 같은 역할이므로 주소값이 나올것이다
	//stack memory에 형성된 st1 st2가 heap에 생성된 2개의 student를 가리킬것이다.

	}

}
