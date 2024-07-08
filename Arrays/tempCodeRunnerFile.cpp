int main(){
 int arr[10]={0,2,3,4,5,6,7,8,9,10};
 int size=10;
 int min=arr[0];
 int max =arr[0];
 for(int i=1; i<size; i++){
   if(min>arr[i]){
    min=arr[i];
   }
   else if(max<arr[i]){
    max=arr[i];
   }
 }
 cout<<min<<endl;
 cout<<max<<endl;
}