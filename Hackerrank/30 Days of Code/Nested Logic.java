import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

    Scanner scan = new Scanner(System.in);
    // Actual return date
    int a_day = scan.nextInt();
    int a_month = scan.nextInt();
    int a_year = scan.nextInt();

    // Expected return date
    int e_day = scan.nextInt();
    int e_month = scan.nextInt();
    int e_year = scan.nextInt();

    // definition of fine
    int fine=0;

    if(a_year < e_year){   // Condition 1
        fine=0;
    }else{
        if(a_year > e_year){   // Condition 4
            fine=10000;
        }else if(a_month > e_month){    // Condition 3
            fine=500 * (a_month - e_month);
        }else if(a_day > e_day){     // Condition 2
            fine=15 * (a_day - e_day);
        }
    }              
    System.out.println(fine);  
    }
}
