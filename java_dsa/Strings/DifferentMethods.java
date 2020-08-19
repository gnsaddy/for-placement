import java.io.*;
import java.util.*;


class DifferentMethods {
    String greet = "Hello user, how are you??";
    String z = "";

    void checkLength(){
        System.out.println("Length of string: "+ greet.length());
    }

    void checkCharAt(){
        System.out.println("Char at 4:"+ greet.charAt(4));
        for(int i=0;i<greet.length();i++){
            // System.out.println(greet.charAt(i));
            if(greet.charAt(i) == ' '){
                // System.out.println(i);
                String n = Character.toString(greet.charAt(i+1));
                System.out.println(n.toUpperCase());                
            }
        }
    }

    void checkSubString(){
        System.out.println("ith to end : "+ greet.substring(4));  
        System.out.println("ith to jth : "+ greet.substring(2,9));   
    }

    void checkConcat(){
        String s1 = "Geeks";
        String s2 = "forGeeks";
        System.out.println("first char => "+s1.charAt(0));
        System.out.println("last char => "+s1.charAt(s1.length()-1));
        String output = s1.concat(s2);
        System.out.println(output);
    }

    void checkIndexOf(){
        String s = "Learn Share Learn";
        System.out.println(s.indexOf("Share"));
        System.out.println(s.indexOf("ea",3));
    }

    void chechEqualIgonreCase(){
        String s1 = "aDDy";
        String s2 = "AddY";
        System.out.println(s1.equalsIgnoreCase(s2));
    }

    void checkCompareTo(){
        String s1 = "aDDy";
        String s2 = "AddY";
        System.out.println("c: "+ s1.compareTo(s2));
        System.out.println("c: "+ s1.compareToIgnoreCase(s2));

        // This returns difference s1-s2. If :
        // out < 0  // s1 comes before s2
        // out = 0  // s1 and s2 are equal.
        // out > 0   // s1 comes after s2.
    }

    void checkSplit(){
        String str = "geekss@for@geekss"; 
        String[] arrOfStr = str.split("@", 3); 
  
        for (String a : arrOfStr) 
            System.out.println(a); 

        String str2 = "GeeksforGeeksforStudents"; 
        String[] arrOfStr2 = str2.split("for"); 
      
        for (String a : arrOfStr2) 
            System.out.println(a);
    }

    void checkValueOf(){
        int value=30;  
        String s1=String.valueOf(value);  
        System.out.println(s1+10);//concatenating string with 10  
    }


    public static void main(String[] args) {
        DifferentMethods obj = new DifferentMethods();
        // length
        obj.checkLength();
        // charAt
        obj.checkCharAt();
        // subString
        obj.checkSubString();
        // concat
        obj.checkConcat();
        // indexOF
        obj.checkIndexOf();
        // equalsIgnoreCase
        obj.chechEqualIgonreCase();
        // campareTo
        obj.checkCompareTo();
        //  split
        obj.checkSplit();
        // valueOf
        obj.checkValueOf();
    }
}

