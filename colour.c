    #include<graphics.h> 
    #include<conio.h> 
      
    main() 
    { 
       	int gd = DETECT, gm; 
       	initgraph(&gd, &gm, "C:\\TC\\BGI"); 
      
       	setcolor(1); // You can use "1" instead of "BLUE" 
    	rectangle(50,50,100,100); 
    	getch(); 
     
       	closegraph(); 
       	return 0; 
     
    } 
