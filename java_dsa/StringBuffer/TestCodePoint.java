import java.io.*; 
import java.lang.*; 

class TestCodePoint {
    public static void main(String[] args) {
        StringBuffer str = new StringBuffer("Hello user!");
        System.out.println(str);
        str.appendCodePoint(67); // 67 to ASCII C
        System.out.println(str);

        System.out.println(str.codePointAt(3)); // l is 108
        System.out.println(str.codePointBefore(4)); // l is 108

        System.out.println(str.codePointCount(0,str.length())); 
    }
}