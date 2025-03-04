import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class ProductNotFound extends Exception {
  public ProductNotFound() {

  }

  public ProductNotFound(String message) {
    super(message);
  }

  public ProductNotFound(String message, Throwable cause) {
    super(message, cause);
  }

  public ProductNotFound(Throwable cause) {
    super(cause);
  }

}

class Product {

  String name;
  int id;

  public Product(String name, int id) {
    this.id = id;
    this.name = name;
  }

}

public class Assign12 {
  static List<Product> productList = new ArrayList<>();

  static {
    String[] productName = { "toothpaste", "toothbrush", "shampoo", "soap", "pen", "pencil" };
    int[] productId = { 12, 34, 56, 23, 67, 9 };
  
    for (int i = 0; i < productName.length; i++) {
      productList.add(new Product(productName[i], productId[i]));
    }
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter product id  to find the product  : ");
    int searchProductId = scanner.nextInt();

    try {
      for (Product product : productList) {
        if (product.id == searchProductId) {
          System.out.println("Product Id : " + product.id);
          System.out.println("Product Name : " + product.name);
          return;
        }
      }
      throw new ProductNotFound("Product with id " + searchProductId + " not found !!");
    } catch (Exception e) {
      System.out.println(e);
    }
  }
}
