import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            int n = Integer.parseInt(br.readLine());
            int[][] arr = new int[n][2];
            for (int i = 0; i < n; i++) {
                String[] tmp = br.readLine().split(" ");
                arr[i][0] = Integer.parseInt(tmp[0]);
                arr[i][1] = Integer.parseInt(tmp[1]);
            }

            if (solve(arr)) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }

    private static boolean solve(int[][] arr) {
        int cnt = 0, max_cnt = 0;
        for (int[] row : arr) {
            if (row[0] == row[1]) {
                cnt++;
            } else {
                cnt = 0;
            }
            max_cnt = Math.max(max_cnt, cnt);
        }

        return max_cnt >= 3;
    }
}
