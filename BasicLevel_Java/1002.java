package PAT;

import java.util.Scanner;

/*author:moonlake23
question1002:写出这个数 */
public class Main {
	public static void translate(int num) {
		String Pingying[]= {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
		int times=0;
		int []data=new int[20];
		while(num>0) {
			int ave=num%10;
			if(ave<Pingying.length)data[times++]=ave;
			num/=10;
		}
		for(int i=times-1;i>=0;i--) {
			System.out.print(Pingying[data[i]]);
			if(i!=0)System.out.print(" ");
		}
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		String s1=sc.nextLine();
		char []s2=s1.toCharArray();
		
		int sum=0;
		for(int i=0;i<s2.length;i++) {
			sum+=(s2[i]-'0');
		}
		translate(sum);
		sc.close();
	}
}
