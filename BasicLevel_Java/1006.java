import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num=sc.nextInt(),a,b,c;
		a=num/100;
	    c=num%10;
		b=(num%100-c)/10;

		for(int i=1;i<=a;i++)
			System.out.print("B");
		for(int i=1;i<=b;i++)
			System.out.print("S");
		for(int i=1;i<=c;i++)
			System.out.print(i);
	}

}