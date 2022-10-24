class FindMaximumSum{
    public static void main(String[] args) {
        int arr[]={-2};
        int max_so_far=arr[0];
        int max_end_here=arr[0];
        for(int i=1;i<arr.length;i++){
            max_end_here*=arr[i];
            System.out.println(max_end_here);
           
            if(max_end_here!=0&&max_so_far<max_end_here){
                max_so_far = max_end_here;
            }
            else if(max_end_here==0){
                max_end_here=1;
            }
           
        }

        System.out.println(max_so_far);
    }
}