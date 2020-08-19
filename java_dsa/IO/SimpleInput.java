import java.io.*;
import java.util.*;

class SimpleInput{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter name: ");
        String name = br.readLine();
        System.out.println(name);
        double marks = Double.parseDouble(br.readLine());
        System.out.println(marks);

    }
}