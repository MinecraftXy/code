
#include     <     iostream>
            #include <  Windows.h        >
                using  namespace                std;

     int      main     ()
{
            	while      (   true           )
	   {
	         	int     a   {};
		    int         b  {};
		       int        c  {};
		  int         d    {};
		      cout     <<     "分母:"    <<  endl;
		                              cin        >>    a;
		      c        =         a;
	                 	cout     << "分子"    <<     endl;
		           cin                      >>               b;
		 d            =                   b;
		                        while (a    !=         b)
		  {
			            if    (a    > b   ) //如       果n1>        n2，n1     是大的数
				a                        =    a    -      b     ;//就n1           -n2，赋值  给n1
			               else//否  则   (n1<         n2， n2    是大     的数)
				b             =       b       -   a;//          n2-      n1，赋  值给n2
		         }
		             system                (            "cls"     );
		           cout          <<      c    <<    "÷"   <<  a   <<  "  =  "  <<   c  / a   <<   endl;
		     cout    <<     "------   ------\n";
		   cout <<   d  <<  "÷" <<    b  <<    "  =  "<<   d /  b  <<    endl;
		                  system            (                           "pause"   );
		                            system         (   "cls"         );
	   }
 }