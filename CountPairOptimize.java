import java.util.HashMap;
import java.util.Map;

public class CountPairOptimize {
    
    static int getPairs(int arr[],int sum){
        HashMap<Integer,Integer> hm = new HashMap<>();
        //code to put freqenecy of elements t HashMap
        for(int i=0;i<arr.length;i++){
            if (!hm.containsKey(arr[i]))
                hm.put(arr[i], 0);
            hm.put(arr[i], hm.get(arr[i]) + 1);
        }
        // code to print hashmap values
        for(Map.Entry<Integer,Integer> map : hm.entrySet()){
            System.out.println(map.getKey()+" "+map.getValue());
        }

        //another code to print values of hashmap
        // hm.entrySet().forEach(entry->{
        //     System.ou.println(entry.getKey()+" "+entry.getValues());
        // });

        int twice_count = 0;

        for(int i=0;i<arr.length;i++){
            //if element is not null then add frequecy in twice_count
            if(hm.get(sum-arr[i])!=null){
                twice_count+=hm.get(sum-arr[i]);

            }

            //by this we are removing ekement pairs with itself
            if(sum-arr[i]==arr[i]){
                twice_count--;
            }
        }
        return twice_count/2;

    }public static void main(String[] args) {
        int sum =2;
        int arr[] =new int[]{1,1,1,1};
        System.out.println(getPairs(arr, sum));

    }

}
