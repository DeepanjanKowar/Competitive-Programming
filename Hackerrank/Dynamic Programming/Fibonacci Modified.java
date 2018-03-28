import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static BigInteger fibonacciModified(int t1, int t2, int n) {
        BigInteger a = new BigInteger("1");
        a=BigInteger.valueOf(t1);
        BigInteger b = new BigInteger("1");
        b=BigInteger.valueOf(t2);
        BigInteger ans=new BigInteger("0");
        for (int i = 2; i < n; i++) {
            ans = a.add(b.pow(2));
            a=b;
            b=ans;
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t1 = in.nextInt();
        int t2 = in.nextInt();
        int n = in.nextInt();
        BigInteger result = fibonacciModified(t1, t2, n);
        System.out.println(result);
        in.close();
    }
}
