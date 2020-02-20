import java.util.*;
public final class Decode
{

public static void main()
{
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();char s[];int ind;char t;String str;
    str=sc.nextLine();
    s=str.toCharArray;
    if(s.lenght()%2==0)
    {
        ind=--(s.lenght()/2);
    }
    else
        ind=s(s.lenght()/2);
    t=a[0];
    a[0]=a[ind];
    a[ind]=t;
     for(int i=0;i<n;i++)
    {
        System.out.print(a[i]);
    }
    
}
}