   #include<stdio.h>
void printArray(int *array,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
void merge(int array[],int low,int mid,int high)
{
    int arr[20];
    int i,j,k;
     i=low;
     j= mid+1;
     k=low;
    while(i<=mid && j<=high)
    {
        if(array[i]<array[j])
        {
            arr[k]=array[i];
            i++;
            k++;
        }
        else{
            arr[k]=array[j];
            j++;
            k++;
        }
        
    }
    while(i<=mid)
    {
        arr[k]=array[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        arr[k]=array[j];
        j++;
        k++;
    }
    for(int x=0;x<=high;x++)
    {
        array[x]=arr[x];
    }
}
void mergeSort(int array[],int low,int high)
{
    int mid;
    if(low<high)
    {
         mid = (low+high)/2;
        mergeSort(array,low,mid);
        mergeSort(array,mid+1,high);
        merge(array,low,mid,high);
    }
}
int main()
{
    printf("This is Merge Sort Algorithm program\n");
    int array[]={30,10,60,50,40,90,70,20,100};
    int n=9;
    printf("The array before sorting is:\n");
    printArray(array,n);
    mergeSort(array,0,8);
    printf("The array after sorting is:\n");
    printArray(array,n);
    return 0;
}