import java.util.Scanner;
import java.util.ArrayList;

public class ANewLife {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int q = scanner.nextInt();

        while (n > 0 || q > 0) {
            ArrayList<Integer> pref = new ArrayList<Integer>();
            pref.add(0);

            int bestStart = -1;
            int bestCount = 0;
            int bestTime = q + 1;
            int total = 0;

            for (int i = 1; i <= n; i++) {
                int next = scanner.nextInt();
                total += next;
                pref.add(total);
            }

            for (int i = 1; i <= n; i++) {
                int lo = i;
                int hi = n;

                if (q < pref.get(lo) - pref.get(i - 1))
                    continue;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (pref.get(mid) - pref.get(i - 1) <= q && (mid == n || pref.get(mid + 1) - pref.get(i - 1) > q)) {
                        int count = mid - i + 1;
                        int time = pref.get(mid) - pref.get(i - 1);
                        if (count > bestCount || (count == bestCount && time < bestTime)) {
                            bestStart = i;
                            bestCount = count;
                            bestTime = time;
                        }
                        break;
                    } else if (pref.get(mid) - pref.get(i - 1) > q) {
                        hi = mid - 1;
                    } else if (pref.get(mid) - pref.get(i - 1) <= q && pref.get(mid + 1) - pref.get(i - 1) <= q) {
                        lo = mid + 1;
                    }
                }
            }

            if (bestStart == -1) {
                System.out.println("go back to old life");
            } else {
                System.out.println("buy plot " + bestStart + " to plot " + (bestStart + bestCount - 1));
            }

            n = scanner.nextInt();
            q = scanner.nextInt();
        }

        scanner.close();
    }
}