import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String s = br.readLine();
            int num = Integer.parseInt(s);
            if (num == 0) 
                System.out.println(1);
            else if (num == 1)
                System.out.println(0);
        }
    }
}