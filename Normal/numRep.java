import java.util.Scanner;

public class numRep {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String str = sc.nextLine();
            StringBuilder num = new StringBuilder(str);
            int f = 0;
            for (int i = 0; i < num.length(); i++) {
                switch (num.charAt(i)) {
                    case '0':
                        num.replace(i, i + 1, "9");
                        break;
                    case '1':
                        num.replace(i, i + 1, "8");
                        break;
                    case '2':
                        num.replace(i, i + 1, "7");
                        break;
                    case '3':
                        num.replace(i, i + 1, "6");
                        break;
                    case '4':
                        num.replace(i, i + 1, "5");
                        break;
                    case '5':
                        num.replace(i, i + 1, "4");
                        break;
                    case '6':
                        num.replace(i, i + 1, "3");
                        break;
                    case '7':
                        num.replace(i, i + 1, "2");
                        break;
                    case '8':
                        num.replace(i, i + 1, "1");
                        break;
                    case '9':
                        num.replace(i, i + 1, "0");
                        break;
                    default:
                        f = 1;
                        break;
                }
                if (f == 1) {
                    System.out.println("wrong input");
                    break;
                }
            }
            if (f != 1) {
                System.out.println(num);
            }
        }
    }
}
