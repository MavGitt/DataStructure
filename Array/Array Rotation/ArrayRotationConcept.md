# **The Reversal Algorithm**

The Reversal algorithm is used for rotating the array in **K** places.

Array Rotation can take place in **Three** ways.
 - Left Rotation
 - Right Rotation
 - In-Place Rotation
 ## Left Rotation

`Input :  arr[] = [1, 2, 3, 4, 5, 6, 7] `
                `d = 2`
`Output : arr[] = [3, 4, 5, 6, 7, 1, 2]`

 ## Right Rotation

`Input :  arr[] = [1, 2, 3, 4, 5, 6, 7] `
                `d = 2`
`Output : arr[] = [6, 7, 1, 2, 3, 4, 5]`

## In-Place Rotation

`Input :  arr[] = [1, 2, 3, 4, 5, 6, 7] `
                
`Output : arr[] = [7, 6, 5, 4, 3, 2, 1]`


## Algorithm
For Left Rotation
 1.  reverse(arr[], 0, d-1) ;
 2.  reverse(arr[], d , n-1);
 3.  reverse(arr[], 0, n-1);

For Right Rotation
 1. reverse(arr[], 0, n-1);
 2. reverse(arr[], 0, d-1) ;
 3.  reverse(arr[], d , n-1);
 
 For In-Place Rotation
 

## Complexity
`Time Complexity : O(n)`
`Space Complexity : O(1)`
   
