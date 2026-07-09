package list_dojos;

import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class Exe2Zoeiro {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();

        Map<Character, Character> exchanges = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();
            if (line.length() >= 3) {
                char a = line.charAt(0);
                char b = line.charAt(2);
                exchanges.put(a, b);
                exchanges.put(b, a);
            }
        }

        for (int i = 0; i < m; i++) {
            String line = sc.nextLine();
            StringBuilder modifiedLine = new StringBuilder(line.length());

            for (int j = 0; j < line.length(); j++) {
                char curr = line.charAt(j);
                modifiedLine.append(exchanges.getOrDefault(curr, curr));
            }

            System.out.println(modifiedLine.toString());
        }

        sc.close();
    }
}