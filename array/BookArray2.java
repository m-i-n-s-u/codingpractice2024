package array;

public class BookArray2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Book[] library =new Book[5];
		
		library[0]=new Book("태백산맥","조쟁래");
		library[1]=new Book("태백산맥","조쟁래");
		library[2]=new Book("태백산맥","조쟁래");
		library[3]=new Book("태백산맥","조쟁래");
		library[4]=new Book("태백산맥","조쟁래");
		
		for(int i=0;i<library.length ; i++) {
			library[i].showBookinfo();
		}
		
		for(int i=0;i<library.length ; i++) {
			System.out.println(library[i]);;
		}
		
	}

}
