import java.util.HashSet;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int times = sc.nextInt();
    for (int i = 0; i < times; i++) {
      char[] s = sc.next().toCharArray();
      HashSet<Character> hashSet = new HashSet<>();
      for (char j : s) {
        hashSet.add(j);
      }
      int abscense = 0;
      for (int j = 65; j < 91; j++) {
        if (!hashSet.contains((char) j)) {
          abscense += j;
        }
      }
      System.out.println(abscense);
    }
  }
}
