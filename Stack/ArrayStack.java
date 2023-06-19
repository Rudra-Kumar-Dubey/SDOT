import java.util.Scanner;

public class ArrayStack {
    static int push(int d, int[] arr, int Top) {
        if (Top < 0) {
            System.out.println("Cannot Push stack is Full");
        } else {
            arr[Top] = d;
            Top--;
            System.out.println("Pushed" + d);
        }
        return Top;
    }

    static int pop(int[] arr, int Top) {
        if (Top >= 4) {
            System.out.println("Stack is Empty");
        } else {
            Top++;
            int element = arr[Top];
            arr[Top] = 0;
            System.out.println("Deleted" + element);
        }
        return Top;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Max Size of Stack");
        int M = sc.nextInt();
        int[] arr = new int[M];
        int Top = M - 1;
        Top = push(5, arr, Top);
        Top = push(6, arr, Top);
        Top = push(8, arr, Top);
        Top = push(7, arr, Top);
        Top = push(9, arr, Top);
        Top = push(8, arr, Top);
        System.out.println("After adding Arr is:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        Top = pop(arr, Top);
        System.out.println("After Deleting Arr is:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
