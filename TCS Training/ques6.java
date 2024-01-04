public class ques6 {
    public static void main(String[] arg) {
        int n = 3;
        int arr[] = { 30, 30, 60 };
        int f = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 30 || arr[i] == 60 || arr[i] == 90) {
                continue;
            } else {
                f = 1;
                System.out.println("Transaction Not Successful");
                break;
            }

        }
        if (f == 0) {
            System.out.println("Transaction Successful");
        }
    }
}
