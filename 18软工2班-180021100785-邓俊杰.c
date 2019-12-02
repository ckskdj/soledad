int binary_search(int data[],int n,int x)
{
if(n <=0|| x < data[0]|| x > data[n-1]){
return-1;
}
int left =0, right = n-1;
int middle;
while(left <= right){
middle =(left + right)/2;
if(x == data[middle]){
return middle;
}elseif(x > data[middle]){
left = middle +1;
}else{
right = middle -1;
}
}
return-1;
}
