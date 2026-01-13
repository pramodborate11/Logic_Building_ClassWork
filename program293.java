import java.util.*;
class program293
{
    public static void main(String A[])
    {
       int Arr[] = {45,21,90,54,78};

       //This is For Each Loop
       for(int no : Arr)
       {
        System.out.println(no);
       }

       Arrays.sort(Arr);                                   // inbuild class in 

       System.out.println("Array After Sorting :");

       for(int no : Arr)
       {
        System.out.println(no);
       }
    }
}

/*
Out Put :
45
21
90
54
78
Array After Sorting :
21
45
54
78
90
*/