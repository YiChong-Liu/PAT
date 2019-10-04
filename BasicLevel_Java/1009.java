import java.util.Scanner;

/*author:moonlake23
 * question1009:说反话*/
public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		String s2[]=s1.split(" ");
		for(int i=s2.length-1;i>=0;i--) {
			if(i!=0) {
				System.out.print(s2[i]+" ");
			}
			else
				System.out.println(s2[i]);
		}
	}

}