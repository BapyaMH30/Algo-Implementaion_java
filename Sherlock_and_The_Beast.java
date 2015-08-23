import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Sherlock_and_The_Beast {

    public static void main(String[] args) {

    	Scanner sc=new Scanner(System.in);
    	int t=sc.nextInt();
    	while (t!=0)
    	{
    		t=t-1;
    		int n=sc.nextInt();
    		int x = -1, y = -1;
    		for (int i = n / 3; i >= 0;i--)
    			if ((n - 3 * i) % 5 == 0)
    			{
    				x = i;
    				y = (n - 3 * i) / 5;
    				break;
    			}
    		if (x == -1)
    			System.out.println("-1");
    		else
    		{
    			for (int i = 0; i < 3 * x; i++)
    				System.out.print("5");
    			for (int i = 0; i < 5 * y; i++)
    				System.out.print("3");
    			System.out.println("");
    		}
    	}
    }
}
