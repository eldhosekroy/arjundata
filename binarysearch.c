 #include<stdio.h>
 void main()
 {
        int a[50],i,n,low,high,mid,key;
        printf("enter the limit\n");
        scanf("%d",&n);
        printf("enter the array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        low=0;
        high=n-1;
        printf("find the element to be serached: ");
        scanf("%d",&key);
        while(low<=high)
        {
                mid=(low+high)/2;
                if(a[mid]<key)
                        low=mid+1;
                else if(a[mid]>key)
                        high=mid-1;
                else
                {
                        printf("element %d found at location %d",key,mid+1);
                        break;
                }
        }
        if(low>=high)
        {
                printf("element not found\n");
        }
 }
