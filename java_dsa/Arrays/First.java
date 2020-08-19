import java.util.*;
import java.io.*;

class First{
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter lenght");
        int size = Integer.parseInt(br.readLine());
        Integer[] arr = new Integer[size];

        System.out.println("Enter array elements:");
        for(int i=0;i<size;i++){
            arr[i] = Integer.parseInt(br.readLine());
        }
        // for(int i=0;i<size;i++){
        //     System.out.print(arr[i]);
        // }

        // ascending
        Arrays.sort(arr;
        // decensding
        Arrays.sort(arr, Collections.reverseOrder());
        System.out.println(Arrays.toString(arr));
    }
}
