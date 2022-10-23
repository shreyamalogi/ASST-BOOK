//different kinds of patterns you can follow with just one trick
//
//eg:
//	pyramid
//	right triangle
//	left triangle
//	right downward triangle
//	left downward triangle
//	double hill 
//	reverse pyramid
//	butterfly diamond sandglass
//	left pascal triangle 
//	right pascal triangle
	
	
//the triangles are of 2 types 
//	
//increasing triangle
//	
//*
//*  *
//*  *  *
//*  *  *  *
//*  *  *  *  *
//*  *  *  *  *  *
//
//
//decreasing triangle
//
//*  *  *  *  *  *
//*  *  *  *  *
//*  *  *  *
//*  *  *
//*  *
//*
//
//	
//	
//	
//	you need to identify these triangles in your patterns
//	
//	the outer loop is for rows/rownumbers
//	the innerloop is for columns 
//	
//	consider outer loop is always  : 1 to <=n,
//	 (applicable to both increasing triangle and decreasing triangle)
//	
//	for increasing triangle :
//		inner loop : 1 to <=i
//	for decreasing triangle :
//		inner loop : i to <=n 
	
