import java.util.*;


class Emp {
    private int eid;
    private String name;
    static String company = "CodeZee LTD";
    private String contact;
    private String mail;

    public int getEid() {
        return eid;
    }

    public void setEid(int eid) {
        this.eid = eid;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getContact() {
        return contact;
    }

    public void setContact(String contact) {
        this.contact = contact;
    }


    public String getMail() {
        return mail;
    }

    public void setMail(String mail) {
        this.mail = mail;
    }

}

public class EmpClass {
    public static void main(String[] args)throws Exception {
        Dictionary dict = new Hashtable();

        Emp obj = new Emp();
        System.out.println(Emp.company);

        obj.setEid(1);
        obj.setName("Aditya Raj");
        obj.setContact("8271388851");
        obj.setMail("gnsaddy@gmail.com");

        dict.put("1", obj.getEid());
        System.out.println(dict.get("1"));
        

    }
}