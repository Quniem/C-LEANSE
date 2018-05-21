#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
#include<bits/stdc++.h> //header file 

void merge(vector<int> &v, int start1, int end1, int start2, int end2)
{
	vector<int> left; // left array
	vector<int> right; // right array
	int i, j;
	for (i = start1; i <= end1; i++) {
		left.push_back(v[i]); // filling the left array
	}
	for (i = start2; i <= end2; i++) {
		right.push_back(v[i]); // filling the right array
	}
	i = 0;
	j = 0;
	int len1 = left.size(), len2 = right.size(); // calculating the length of right and left array
	while (i < len1 && j < len2) { // until one array is completely parsed this loop will continue
		if (left[i] <= right[j]) { // if the current value of left array is less than the current of right array 
			v[start1++] = left[i++]; // increase the pointer of left array and also increase the pointer of array we are filling
		}
		else {
			v[start1++] = right[j++];// otherwise increase the pointer of right array and also increase the pointer of array we are filling
		}
	}
	while (i < len1) {// if left array is not parsed completely 
		v[start1++] = left[i++]; // increase the pointer of left array and also increase the pointer of array we are filling
	}
	while (j < len2) {//if the right array is not parsed completely
		v[start1++] = right[j++];// increase the pointer of left array and also increase the pointer of array we are filling
	}
}

void merge_sort(vector<int> &v, int start, int end)
{
	if (start < end) {
		int mid = start + (end - start) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, mid, mid + 1, end);
	}
}

int main()
{
	int i, n, x;
	cin >> n;
	vector<int> v; // input vector
	for (i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	merge_sort(v, 0, v.size() - 1);
	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
}

void merge_sort(vector<int> &v, int start, int end)
{
	if (start < end) {
		int mid = start + (end - start) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, mid, mid + 1, end);
	}
}

int main()
{
	int i, n, x;
	cin >> n;
	vector<int> v; // input vector
	for (i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	merge_sort(v, 0, v.size() - 1);
	for (i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}