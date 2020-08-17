// Import the HashMap class
import java.util.HashMap;

public class MyClass {
  public static void main(String[] args) {
    // Create a HashMap object called capitalCities
    HashMap<String,Integer> capitalCities = new HashMap<>();

    // Add keys and values (Country, City)
    capitalCities.put("England");
    capitalCities.put("Germany");
    capitalCities.put("Norway");
    capitalCities.put("USA");
    System.out.println(capitalCities);
  }
}