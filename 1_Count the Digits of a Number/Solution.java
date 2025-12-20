import java.util.Scanner;

public class Solution {
    public static int countDigits(int n) {
        int count= 0;
        if (n == 0){
            return 1;
        }
        while (n>0){
            n = n / 10;
            count++;
        }
        return count;
    }

    public static void main(String[] args){
        int n;
        System.out.println("Enter the Number :- ");
        Scanner sn = new Scanner(System.in);
        n = sn.nextInt();
        int result = countDigits(n);
        System.out.println(result);
        sn.close();
    }
}
