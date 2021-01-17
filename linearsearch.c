//linear search algorigthm

int linear_search(int *arr, int key, int min, int max)
{
    int i = min;
    for(;i<=max;i++)
    {
        if(arr[i]==key) {return i;}
    }
    return -1;
}
