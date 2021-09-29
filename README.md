## UVA10038_Jolly_Jumpers_15
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=979
-------
```c++
temp=abs(save[j]-save[j-1]); //마이너스 나올수도 있으니 절대값으로 처리; 
```
+ check for duplicates
-----
### Important part
```c++
if(temp<n) //내가 입력한 값보다 횟수보다 무조건 작아야함; 
{
  count[temp]++; 
  if(count[temp]>1||temp<=0)
  {
    check=0;
    break;
  }
}
else if(temp>=n) //만약 크거나 같으면 틀림; You can change -> just else { }
{
  check=0;
  break;
}
```
