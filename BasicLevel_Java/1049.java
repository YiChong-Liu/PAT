import java.util.Scanner;

/*author:moonlake23
 * question1049:数列的片段和*/

/*思路见c++代码,但此题用java可能会超时，思路正确，
 * 就是Scanner类确实太慢了*/
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int cases=sc.nextInt();
		double sum=0,temp;
		for(int i=0;i<cases;i++) {
			temp=sc.nextDouble();
			sum+=temp*(i+1)*(cases-i);
		}
		System.out.printf("%.2f", sum);
	}

}