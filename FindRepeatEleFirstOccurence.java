import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.LinkedBlockingDeque;

public class FindRepeatEleFirstOccurence {
    public static void main(String[] args) {
       int arr[]={1,2,3,4,5,3,4};
       
       HashMap<Integer,Integer> map = new HashMap<>();

       for(int i=0;i<arr.length;i++){
        if(!map.containsKey(arr[i])){
            map.put(arr[i], 0);
        }
        map.put(arr[i], map.get(arr[i])+1);
       }
       
       map.entrySet().forEach(entry->{
        
            System.out.println(entry.getKey()+" "+entry.getValue());
        });

        int flag=0;
        for(int i=0;i<arr.length;i++){
            if(map.get(arr[i])>1){
                System.out.println(i+1);
                flag=1;
                break;
            }
        }

        if(flag==0){
            System.out.println(-1);
        }
        


    }
}
