import java.util.*;
public class binary_srch
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        
        int yr[]={1982,1987,1993,1996,1999,2003,2006,2007,2009,2010};
        System.out.print("Enter Year of Graduation:");
        int n=sc.nextInt();
        int lb=0,ub=9,mid=0;
        boolean found=false;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(yr[mid]==n)
            {
                found=true;
                System.out.println("record exists");
                break;
            }
            else if(yr[mid]<n)
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;
            }
        }
        if(found==false)
        {
            System.out.println("Record does not exist");
        }
        
    }
}
