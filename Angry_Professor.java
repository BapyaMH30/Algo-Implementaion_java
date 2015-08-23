import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Angry_Professor {

    public static void main(String[] args) {

    	Scanner scanner=new Scanner(System.in);
    	int t=scanner.nextInt();
    	while (t!=0)
    	{
    		t=t-1;
    		int n, k, cnt = 0;
    		n=scanner.nextInt();
    		k=scanner.nextInt();
    		for (int i = 0; i < n; i++)
    		{
    			int val;
    			val=scanner.nextInt();
    			if (val <= 0)
    				cnt++;
    		}
    		if(cnt>=k)
    		{
    			System.out.println("NO");
    		}
    		else{
    			System.out.println("YES");
    	}
        }
    }
}
