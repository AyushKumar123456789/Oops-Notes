class Base
{
	public int f(int i)
	{
		System.out.print("f (int): ");
		return i+3;
	}
}
class Derived extends Base
{
	public double f(double i)
	{
		System.out.print("f (double) : ");
		return i + 3.3;
	}
}
class myprogram3
{
	public static void main(String args[])
	{
		Derived obj = new Derived();
		System.out.println(obj.f(3));
		System.out.println(obj.f(3.3));
	}
}

// Output: f (int): 6
// f (double) : 6.6

// So in Java, overloading works across scopes, contrary to C++. The Java compiler determines the correct version of the
//  overloaded method to be executed at compile time based upon the type of arguments used to call the method and the parameters of the 
// overloaded methods of both these classes that receive the values of arguments used in call and executes that overloaded method.




