import java.util.*;
public class str_encryption
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the sentence:");
        String str=sc.nextLine();
        str=str.toUpperCase();
        System.out.print("Enter Encryption No:");
        int n=sc.nextInt();
        n=n%26;
        int ln=str.length();
        String ns="";
        for(int i=0;i<=ln-1;i++)
        {
            int ch=str.charAt(i);
            
            ch=ch+n;
            
            if(ch<65)
            {
                ch=ch+26;
            }
            else if(ch>90)
            {
                ch=ch-26;
            }
            
            ns=ns+(char)ch;
        }
        System.out.println("Orignal String:"+str);
        System.out.println("New String:"+ns);
    }
}