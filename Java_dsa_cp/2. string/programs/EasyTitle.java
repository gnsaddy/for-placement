import java.util.*;

public class EasyTitle {
    public static void main(String[] args){

        // Declare the string 
        String s1 = "hello user, how are you??"; 
        // Scanner in = new Scanner(System.in);
        Scanner in = new Scanner(s1);
        
        // System.out.print("Input a Sentence: => ");

        String line = in.nextLine();
        
        String upper_case_line = ""; 
        Scanner lineScan = new Scanner(line);

        
        while(lineScan.hasNext()) {
            String word = lineScan.next(); 
            System.out.println(word);
            upper_case_line += Character.toUpperCase(word.charAt(0)) + 
            word.substring(1) + " "; 
        }

        System.out.println(upper_case_line.trim()); 

        }
}
