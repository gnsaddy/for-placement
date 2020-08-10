import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

class ReverseArray {
    public static void main(String args[] ) throws Exception {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int length = Integer.parseInt(br.readLine());
        int[] arr = new int[length];

        for(int i=0; i<length; i++ ) {
         arr[i] = Integer.parseInt(br.readLine());
        }

        for(int i=length-1;i>=0;i--){
            System.out.println(arr[i]);
        }
    }
}