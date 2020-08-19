import java.util.*;
import java.io.*;


class Patterns{
    public static void main(String[] args) {
        int n= 5;
        int i,j;

        System.out.println("1. Pyramid Program");
        for (i=0; i<n; i++) //outer loop for number of rows(n)
        { 
            for (j=n-i; j>1; j--) //inner loop for spaces
                System.out.print(""); //print space
            for (j=0; j<=i; j++ ) //inner loop for number of columns
                System.out.print("* "); //print star
            System.out.println(); //ending line after each row
        } 

        System.out.println("2. Right Triangle Star Pattern");
        for(i=0; i<n; i++) //outer loop for number of rows(n) 
        {
            for(j=2*(n-i); j>=0; j--) // inner loop for spaces       
                System.out.print("-"); // printing space
            for(j=0; j<=i; j++) //  inner loop for columns
                System.out.print("* "); // print star
            System.out.println(); // ending line after each row
        } 

        System.out.println("3. Left Triangle Star Pattern");
        for(i=0; i<n; i++) //outer loop for number of rows(n)
        { 
            for(j=2*(n-i); j<=0; j--) // inner loop for spaces       
                System.out.print("-"); // printing space
            for(j=0; j<=i; j++) //  inner loop for columns
                System.out.print("* "); // print star
            System.out.println(); // ending line after each row
        } 
    } 

}