import java.io.*;

abstract class Shape{
	abstract void numberOfSides();
		
	
}
class triangle extends Shape{
	void numberOfSides(){
			System.out.println("sides of triangle = 3");	
		}
	}
class rectangle extends Shape{
	void numberOfSides(){
			System.out.println("sides of rectangle = 4");	
		}
	}
class hexagon extends Shape{
	void numberOfSides(){
			System.out.println("sides of hexagon = 6");	
		}
	}
class AbsShp{
	public static void main (String[] arg)
	{	
		

		
		triangle s = new triangle();
		s.numberOfSides();
		
		rectangle r = new rectangle();
		r.numberOfSides();
		
		hexagon h = new hexagon();
		h.numberOfSides();
		
		
		
	}

}
