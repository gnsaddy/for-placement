public class StaticFunOverload{
    public static int foo(int x){
        return x;
    }

    public static double foo(double x){
        return x;
    }

    public static void main(String[] args) {
        StaticFunOverload obj = new StaticFunOverload();
        System.out.println(obj.foo(100));
        System.out.println(obj.foo(100.101));
    }
}