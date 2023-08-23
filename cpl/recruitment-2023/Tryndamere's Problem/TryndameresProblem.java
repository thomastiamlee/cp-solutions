import java.util.Scanner;

public class TryndameresProblem {

    public static int gcd(int a, int b) {
        if (b > a) {
            int temp = a;
            a = b;
            b = temp;
        }
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            int d = scanner.nextInt();

            int g = gcd(b, d);
            int l = b * d / g;
            int gold = l / b * a + l / d * c;
            System.out.println(gold);
        }

        scanner.close();
    }

}