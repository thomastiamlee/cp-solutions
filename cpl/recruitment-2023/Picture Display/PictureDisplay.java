import java.util.Scanner;

public class PictureDisplay {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n;
        double w1, h1, w2, h2;

        n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            w1 = scanner.nextDouble();
            h1 = scanner.nextDouble();
            w2 = scanner.nextDouble();
            h2 = scanner.nextDouble();

            double scaleFactor = Math.min(w1 / w2, h1 / h2);

            double newWidth = w2 * scaleFactor;
            double newHeight = h2 * scaleFactor;

            System.out.printf("%.2f %d %d\n", scaleFactor, (int) ((w1 - newWidth) / 2.0),
                    (int) ((h1 - newHeight) / 2.0));
        }

        scanner.close();
    }
}