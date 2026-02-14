// find the lowets bound of a target
// Means you just have to find the one element which is just equal to or 
// greater than the target element
// first approach is brute force which is to iterate over the entire array bc the array 
// is already sorted and find the element next to the target element if, the traget is greater than
// all the elements in the array then  return the n+1 index ofthe array

// second approach is brute force appraoch which will take o logn time
// take two pointers high low and mid,and keep binary serachin means divinf the array in two parts 
// seraching if the mid is the tagte element, if no mid = target then declare the n+1 the element is target
