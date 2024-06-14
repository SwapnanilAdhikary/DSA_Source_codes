import java.util.*;
public class task8 {
    public  static void main(String[] args){
        int sum=0;
        Random rd = new Random();
        int[] arr = new int[6];
        for(int i=0;i<arr.length;i++){
           arr[i]=rd.nextInt(100-1);
           System.out.println(arr[i]);
        }
        for(int i=0;i<arr.length;i++){
            sum=sum+arr[i];
        }
        System.out.println("the sum is");
        System.out.println(sum);
        int Avg=sum/arr.length;
        System.out.println(Avg);
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        for(int i=0;i<arr.length;i++){
            arr[i];
            if(a==arr[i]){
                System.out.println("its in");
            }else{
                System.out.println("its not in");
            }
        }
        }
    }

