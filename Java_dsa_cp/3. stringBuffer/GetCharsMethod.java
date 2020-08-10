// Java program to demonstrate 
// the getChars() Method. 

import java.util.*; 

class GetCharsMethod { 
	public static void main(String[] args) 
	{ 

		// create a StringBuffer object 
		// with a String pass as parameter 
		StringBuffer 
			str 
			= new StringBuffer("Geeks For Geeks"); 

		// print string 
		System.out.println("String = "
						+ str.toString()); 

		// create a char Array 
		char[] array = new char[15]; 

		// initialize all character to .(dot). 
		Arrays.fill(array, '.'); 

		// get char from index 0 to 9 
		// and store in array start index 3 
		str.getChars(0, 9, array, 3); 

		// print char array after operation 
		System.out.print("char array contains : "); 

		for (int i = 0; i < array.length; i++) { 
			System.out.print(array[i] + " "); 
        } 
        
	} 
} 


// import java.util.Scanner;

// public class Solution {

//     public static void main(String[] args) {    
//         Scanner sc=new Scanner(System.in);
//         System.out.println("================================");
//         for(int i=0; i<3; i++) {
//             String sl=sc.next();
//             int x = sc.nextInt();
//             System.out.printf("%-15s%03d%n", sl, x);
//         }
//         System.out.println("================================");
//     }
// }

// In each line of output there should be two columns:
// The first column contains the String and is left justified using exactly  characters.
// The second column contains the integer, expressed in exactly  digits; if 
// the original input has less than three digits, you must pad your output's leading digits with zeroes.

