using System;
using System.Collections.Generic;
public class Tool{

static bool Next_Permutation<T> (List<T> list) where T : IComparable
{
    Action<int,int> Swap = (int idx1, int idx2) => { T temp = list[idx1]; list[idx1] = list[idx2]; list[idx2] = temp; }; 
    int a= 0, b = 0, p = 0; //p : pivot
    for(int i=list.Count-2 ; i>=0;--i)
        if(list[i].CompareTo(list[i+1])<0)
        {
            a = i;
            p = i + 1;

            for(int j=list.Count-1; j>=0; --j)
                if(list[a].CompareTo(list[j])<0)
                {
                    b = j;
                    break;
                }

            Swap(a, b);

            for(int j=0; j<(list.Count-p)/2; j++)
                Swap(j + p, list.Count - j - 1);

            return true;
        }
    // 이미 순서대로 정렬되어 있음 => 역순으로 뒤집
    for(int i=0;i<list.Count/2;i++)
        Swap(i, list.Count - i- 1);
    return false;
}
static bool NextPermutation(List<int> list)
{
    int i= list.Count-1;
    while(i > 0 && list[i-1] >= list[i])
    {
    i-=1;
    }

    if(i<=0)
    return false; //마지막 순열

    int j = list.Count-1;
    while(list[j] <= list[i-1]){
        j -=1;
    }
    
        //swap
    int temp = list[j];
    list[j] = list[i-1];
    list[i-1] = temp;

    while(i < j){
        
    temp = list[j];
    list[j] = list[i];
    list[i] = temp;
        i+=1;
        j-=1;
    }

    return true;
}


}

