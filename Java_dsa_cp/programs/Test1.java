import java.util.HashSet; 
import java.util.Set; 

public class Test1 { 
	private static void replaceElements(int[] arr, int n) 
	{ 
		Set<Integer> st = new HashSet<>(); 
		for (int i = 0; i < n; i++) { 
			// check whether the element is 
			// repeated or not 
			if (!st.contains(arr[i])) { 
				st.add(arr[i]); 
			} 
			else { 
				// find the next greatest element 
				for (int j = arr[i] + 1; j < Integer.MAX_VALUE; j++) { 
					if (!st.contains(j)) { 
						arr[i] = j; 
						st.add(j); 
						break; 
					} 
				} 
			} 
		} 
	} 
	public static void main(String[] args) 
	{ 
		int[] arr = new int[] { 1, 1, 2, 7, 8, 8, 7 }; 
		int n = arr.length; 
		replaceElements(arr, n); 

		for (int i = 0; i < n; i++) { 
			System.out.print(arr[i] + " "); 
		} 
	} 
} 