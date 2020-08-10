import java.util.*;
import java.io.*;
import java.util.Arrays.*;


class ArraysMethods {
    public static void main(String[] args) 
    { 
        Integer intArr[] = { 10, 20, 15, 22, 35 }; 
        System.out.println(Arrays.binarySearch(intArr, 15)); 
        // To convert the elements as List 
        System.out.println("Integer Array as List: "+ Arrays.asList(intArr));
        System.out.println("=>"+ Arrays.asList(intArr).contains(10));
        boolean a = Arrays.stream(intArr).anyMatch(x-> x==12);
        System.out.println(a); 

        String[] values = {"AB","BC","CD","AE"};
        boolean contains = Arrays.stream(values).anyMatch("AB"::equals);
        System.out.println(contains);

        // To convert the elements as List 
        System.out.println("Integer Array as List: " + Arrays.asList(values));

        // Get the second Arrays 
        Integer intArr1[] = { 10, 20, 15, 22, 35 }; 
  
        // To compare both arrays 
        System.out.println("Integer Arrays on comparison: "+Arrays.equals(intArr, intArr1)); 
        
        
    } 
}