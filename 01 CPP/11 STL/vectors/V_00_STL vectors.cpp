//author :shreyamalogi

STL VECTOR TOPICS
1. push_back() //value will be inserted from the end of the vector
2. pop_back()  //removes the element from the end of vector
3. size()      //how many elements are there
4. resize()    //it will change the size value and other value which are (unknown)there in the size will be initialized to zero
5. begin()		//it is an iterator which returns the iterator of the first element in a vector
6. end()		//it is an iterator which will return the iterator of the last element i.e after the last element
7. clear()     //removes all and makes the vector empty
8. empty()		//to check if the vector is empty or not, it will give 1 (true) if the vector is empty
9. erase()		//delete an element from anywhere in the vector as a result the size will also be reduced....v.erase(v.begin()+1); to remove 2nd element
10. insert()	//insert an element from anyhere in the vector.....(first parameter is the iterator, element)....v.insert(v.begin()+1,8);
11. reverse()	//reverse a vector....reverse(v.begin(),v.end())
12. sort()		//to sort....sort(v.begin(),v.end());


1)

vector<int> v;  //dynamic vector we have not allocated size
vector<int> v(5);  //now the size will be 5

// to print it
for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

