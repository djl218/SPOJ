import java.util.Scanner;

// Time: O(number of input until 42)
// Space: O(1)
// https://www.spoj.com/problems/TEST/
class LifeUniverseEverything {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (true) {
            int x = in.nextInt();
            if (x == 42) {
                break;
            } else {
                System.out.println(x);
            }
        }
        in.close();
    }
}