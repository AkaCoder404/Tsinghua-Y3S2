# 第四次OJ说明文档

计83李天勤2018080106

## MST

I stored graph information in the form of a struct, containing  information about vertices and edges. I used Kruskal's algorithm and found the next smallest edge and adding it to the minimum spanning tree. I used disjoint set and union find algorithm to check if the next smallest branch would form a cycle or not.  Kruskal's algorithm takes $O(E\log E)$

## 汉字排列

I stored information about each 汉字 in the form of a struct, with information about its pinyin, its variance, tone, and stroke order. I stored all characters in a vector, and overloaded the ```std::sort``` comparator `<` to correctly sort the 汉字 based on its different characteristics. 

## SSSP

I used Dijkstra's algorithm to solve this. However, I could not debug errors relating to testcases 4, 7,-10. Dijkstra's algorithm takes $O(n^2)$

## Pair

Using the brute force method of iterating through the whole array  to find reverse pairs took $O(n^2)$, which wasn't quick enough.  I then used a divide and conquer method to find all reverse pairs. The algorithm is as follows:

1. divide array into 2 parts
2. sort both parts
3. find reverse pairs in both parts, add them to result and then merge both parts 

This algorithm is $O(n)$

I did not use any help from classmates. 