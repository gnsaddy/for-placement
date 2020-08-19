import java.io.*;
import java.util.*;

class ReversingString {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter string: ");
        StringBuffer str = new StringBuffer(br.readLine());
        System.out.println("string: "+ str);
        System.out.println("string length: "+ str.length());

        // for(int i=str.length()-1;i>=0;i--){

        //     System.out.print(str.charAt(i) + " ");
        // }

        // System.out.println("\n--------------");
        // System.out.println("string: "+ (str.reverse().toString()));


        String[] strArray = str.toString().split(" ");
        System.out.println(strArray.length);

        for(int i=0;i<strArray.length;i++){
            StringBuilder sb=new StringBuilder();  
        }
            
        // for(int i=0; i<strArray.length; i++){ 
        //     char[] s1 = strArray[i].toCharArray(); 
        //     for (int j = s1.length-1; j>=0; j--){
        //         System.out.print(s1[j]);
        //     }
        //         System.out.print(" ");
        //     }
            System.out.println(); 
    }
}