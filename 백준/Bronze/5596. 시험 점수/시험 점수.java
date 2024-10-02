import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String[] minguk = sc.nextLine().split(" ");
    String[] manseh = sc.nextLine().split(" ");
    int sum_minguk = 0;
    for (String i : minguk) {
      sum_minguk += Integer.parseInt(i);
    }
    int sum_manseh = 0;
    for (String i : manseh) {
      sum_manseh += Integer.parseInt(i);
    }
    if (sum_minguk >= sum_manseh) {
      System.out.println(sum_minguk);
    } else {
      System.out.println(sum_manseh);
    }
  }
}
