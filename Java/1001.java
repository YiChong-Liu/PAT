/*author:moonlake23
question1001:害死人不偿命的(3n+1)猜想 */

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num;
		while(sc.hasNext()) {
			num=sc.nextInt();
			int all=0;
			while(num!=1) {
				all++;
				num=change(num);
			}
			System.out.println(all);
		}
	}
	
	public static int change(int num) {
		if(num%2==0)num=num/2;
		else
			num=(3*num+1)/2;
		return num;
	}
}