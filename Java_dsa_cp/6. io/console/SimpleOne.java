import java.io.Console;

class SimpleOne{
    public static void main(String[] args) {
        Console cr = System.console();
        String str = cr.readLine("Enter name : ");
        System.out.println(str);

        float id = Float.parseFloat(cr.readLine("Enter id : "));
        System.out.println(id);
        cr.printf("id :%.2f ", id);

    }
}