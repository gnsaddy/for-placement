import java.util.*;
import java.io.*;

// user defined objects
class Student 
{ 
    public int roll_no; 
    public String name; 
    Student(int roll_no, String name) 
    { 
        this.roll_no = roll_no; 
        this.name = name; 
    } 
} 

public class ArrayObjects {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int count = sc.nextInt();

        Student[] arr = new Student[count];

        // arr[0] = new Student(1,"aman"); 
  
        // arr[1] = new Student(2,"vaibhav"); 

        System.out.println("Enter roll number and name:");
        for(int i=0;i<count;i++){
            arr[i] = new Student(sc.nextInt(),sc.nextLine());
        }

        // accessing the elements of the specified array 
        for (int i = 0; i < arr.length; i++) 
            System.out.println("Student count " + i+1 + " : Roll: " + 
                        arr[i].roll_no +", Name: "+ arr[i].name);
    }
}