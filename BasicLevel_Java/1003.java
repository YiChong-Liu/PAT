package PAT;

import java.util.Scanner;

/*author:moonlake23
question1003:我要通过! */
public class Main {
	public static boolean identify(String str) {
		char []data=str.toCharArray();
		boolean judge=true;
		//只有PAT
		for(int i=0;i<data.length;i++) {
			if((data[i]!='P'&&data[i]!='A')&&(data[i]!='T'))
				judge=false;
		}
		//只包含PAT
		if(!(str.contains("P")&&str.contains("A")&&str.contains("T")))
			judge=false;
		//满足xPATx
		int i1=str.indexOf("P"),i2=str.indexOf("T");
		for(int i=0;i<i1;i++) {
			if(data[i]=='A')continue;
			else
				judge=false;
		}
		for(int i=i2+1;i<data.length;i++) {
			if(data[i]=='A')continue;
			else
				judge=false;
		}
		return judge;
	}
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int cases=sc.nextInt();
		while(cases-->0) {
			String pat=sc.next();
			boolean judge=identify(pat);
			if(judge) {
				if(!pat.contains("PAT")) {
					String []data=pat.split("P");
					int len1=data[0].length();//P前面的长度
					String []data2=pat.split("T");
					int len2=data2[data2.length-1].length();//T后面的长度
					int len3=pat.length()-len1-len2-2;//中间的长度
					if(len1!=0) {
						if(len2!=len1*len3)judge=false;
					}
				}
			}
			if(judge)System.out.println("YES");
			else
				System.out.println("NO");
		}
		sc.close();
	}

}
