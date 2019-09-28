/*author:moonlake23
 * question1056:组合数的和
 */

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int cases=sc.nextInt();
		int []num=new int[11];
		for(int i=0;i<cases;i++)
			num[i]=sc.nextInt();
		
		int all=0;
		//num[i]作分母,num[j]作分子
		for(int i=0;i<cases;i++) {
			for(int j=0;j<cases;j++) {
				if(j!=i) {
					int temp=num[i]*10+num[j];
					all+=temp;
				}
			}
		}
		
		System.out.println(all);
		sc.close();
	}

}