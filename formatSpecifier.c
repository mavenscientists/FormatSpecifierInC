  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * FormatSpecifier - This program describes how to use various format specifiers in C
   */

#include <stdio.h>

int main()
{
	int a;
	char c;
	float f;
	double d;
	long l;
	short s;
	
	s = 12;
	a = 3444;
	c = 'h';
	f = 12.3;
	d = 13.344;
	l = 123345;
	
	printf("\nInt    : %d", a);
	printf("\nShort  : %hd", s);
	printf("\nChar   : %c", c);
	printf("\nLong   : %ld", l);
	printf("\nFloat  : %f", f);
	printf("\nDouble : %lf",l );
	
	printf("\nSize of Short : %d", sizeof(short));
	
	return 0;
}

