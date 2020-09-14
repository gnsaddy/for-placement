class SecureClass {
    private String usn;
    private String name;
    private String mobile;
    private float fee;

    public String getUSN(){
        return usn;
    }

    public String getName(){
        return name;
    }

    public String getMobile(){
        return mobile;
    }

    public float getFee(){
        return fee;
    }

    public void setUSN(String usn){
        this.usn = usn;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setMobile(String mobile){
        this.mobile = mobile;
    }

    public void setFee(float fee){
        this.fee = fee;
    }
}

public class DataHidingEncapsulation {
    public static void main(String[] args) {
        SecureClass obj = new SecureClass();
        obj.setUSN("1RD18MCA01");
        obj.setName("Aditya Raj");
        obj.setMobile("8271388851");
        obj.setFee(95000);

        System.out.println(obj.getUSN());
        System.out.println(obj.getName());
        System.out.println(obj.getMobile());
        System.out.println(obj.getFee());
    }
}