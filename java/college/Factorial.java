package college;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, fact = 1;
        System.out.print("Enter a number : ");
        n = sc.nextInt();

        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        System.out.println("Factorial is : " + fact);
    }
}