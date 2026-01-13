import java.util.*;
class program294
{
    public static void main(String A[])
    {
       int Arr[] = {45,21,90,54,78};

       //This is For Each Loop
       for(int no : Arr)
       {
        System.out.println(no);
       }

       int index = Arrays.binarySearch(Arr,90);

       System.out.println("Element Count at : "+index);
    }
}

/*
Out Put :
45
21
90
54
78
Element Count at : 2
*/