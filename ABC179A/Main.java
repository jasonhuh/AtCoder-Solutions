import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {
            String s = br.readLine();
            if (s.charAt(s.length() - 1) == 's') 
                System.out.printf("%ses\n", s);
            else
                System.out.printf("%ss\n", s);
        }
    }
}