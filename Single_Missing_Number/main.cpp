#include <iostream>
#include <vector>

int single_missing_number(const std::vector<int>& A)
{
//	l -> left index; r -> right index; mid -> middle index; diff -> difference between 1st number & 1st index
	int l{}, r{A.size() - 1};
	int mid{(l + r)/2}, diff{A[0] - 0};
	
	while(l < r)
	{
//		if the difference between A[mid] & A[mid + 1] is more than 1 then the missing number will be (A[mid] + 1).
		if(A[mid + 1] - A[mid] > 1)
			return A[mid] + 1;
		
//		(A[mid] - mid) will be equal to diff unless we cross the missing number. We will use Binary Search logic to
//		reduce the size of the array.
		if(A[mid] - mid > diff)
			r = mid - 1;
		else
			l = mid + 1;
		
		mid = (l + r)/2;
	}
	
//	when the missing number is after the place where l == r, loop will fail to detect that so we will check if outside
//	the loop.
	if(mid < A.size() - 1)
	{
		if(A[mid + 1] - A[mid] > 1)
			return A[mid] + 1;
	}
	
	return -1;
}

int main()
{
	std::vector<int> A {2,3,4,5,6,7,9};
	
	std::cout<<"single missing number = "<<single_missing_number(A)<<"\n";
	
	return 0;
}