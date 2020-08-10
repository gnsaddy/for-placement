// Java Program to capitalize each word in a string 
public class Title { 

	// Method to convert the string 
	static String capitailizeWord(String str) { 
        StringBuffer s = new StringBuffer(); 

		// Declare a character of space 
		// To identify that the next character is the starting of a new word 
		char ch = ' '; 
		for (int i = 0; i < str.length(); i++) { 
			
			// If previous character is space and current 
			// character is not space then it shows that 
			// current letter is the starting of the word 
			if (ch == ' ' && str.charAt(i) != ' ') {
                s.append(Character.toUpperCase(str.charAt(i))); 
                // System.out.println(s);
            }
			else{
                s.append(str.charAt(i)); 
                System.out.println(s);
            }
            ch = str.charAt(i); 
            // System.out.println(ch);
		} 

		// Return the string with trimming 
		return s.toString().trim(); 
	} 


	public static void main(String args[]) { 

		// Declare the string 
		String s1 = "Hello user, how are you??"; 

		// Convert that string into lowercase 
		s1 = s1.toLowerCase(); 

		// Call the method to capitalize each word 
		System.out.println(capitailizeWord(s1)); 
	} 
} 
