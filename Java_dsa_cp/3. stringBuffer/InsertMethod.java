import java.io.*; 
public class InsertMethod { 
	public static void main(String[] args) 
	{ 
		StringBuffer s = new StringBuffer("GeeksGeeks"); 
		s.insert(5, "for"); 
		System.out.println(s); // returns GeeksforGeeks 

		s.insert(0, 5); 
		System.out.println(s); // returns 5GeeksforGeeks 

		s.insert(3, true); 
		System.out.println(s); // returns 5GetrueeksforGeeks 

		s.insert(5, 41.35d); 
		System.out.println(s); // returns 5Getr41.35ueeksforGeeks 

		s.insert(8, 41.35f); 
		System.out.println(s); // returns 5Getr41.41.3535ueeksforGeeks 

		char geeks_arr[] = { 'p', 'a', 'w', 'a', 'n' }; 

		// insert character array at offset 9 
		s.insert(2, geeks_arr); 
		System.out.println(s); // returns 5Gpawanetr41.41.3535ueeksforGeeks 
	} 
} 
