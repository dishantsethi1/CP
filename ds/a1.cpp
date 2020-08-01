// int main()
// {
//     int n,m,f=0;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"eneter element to search";
//     cin>>m;
//     int low=0,high=n-1,mid=(high+low)/2;
//     while(low<=high)
//     {
        
//         mid=(low+high)/2;
//         if(m==a[mid]){cout<<"found at "<<mid+1; f=1; break;}
//         else if(m<a[mid]) high=mid-1;
//         else low=mid+1;
//     }
//     if(f==0){
//     cout<<"not found";}
// }