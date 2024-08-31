public class overloadstrings
{
        public static void check(String str, char ch)
        {
            int ln=str.length();
            
            int c=0;
            for(int i=0;i<=ln-1;i++)
            {
                char x=str.charAt(i);
                if(x==ch)
                c++;
            }
            System.out.println(c);
        }
        
        public static void check(String s1)
        {
            s1=s1.toLowerCase();
            int ln=s1.length();
            for(int i=0;i<=ln-1;i++)
            {
                char ch=s1.charAt(i);
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                System.out.print(ch+" ");
            }
        }
}
