import java.text.DecimalFormat;

public class Sample_one {
    public static DecimalFormat df = new DecimalFormat("0.00");

    public int sum(int x, int y){
        return x+y;
    }

    public int sum(int x, int y, int z){
        return x+y+z;
    }

    public float sum(float x,float y ){
        return x+y;
    }

    public double sum(double x, double y){
        return x+y;
    }

    public static void main(String[] args) {
        Sample_one obj =  new Sample_one();
        System.out.println(obj.sum(10,20));
        System.out.println(obj.sum(10,20,30));
        float t = (float)obj.sum(10.56,20.56);
        System.out.println(df.format(t));
        System.out.println(df.format(obj.sum(10.1234,20.1234)));
    }
}