## Class

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        for (int i = 1; i < n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(dp[i - 1][1], -prices[i]);
        }
        return dp[n - 1][0];
    }
};
```

## Encapsulation

Implented in two ways.

1. Data hiding: The data is hidden from the outside world and can only be accessed through the member functions.

Example of data hiding: Real world example of data hiding is a class. The class can only access the data through the member functions.

```cpp
class Solution {
private:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        for (int i = 1; i < n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(dp[i - 1][1], -prices[i]);
        }
        return dp[n - 1][0];
    }
public:
    int maxProfit(vector<int>& prices) {
        return maxProfit(prices);
    }
};

// Here Data is hidden from the outside world and can only be accessed through the member functions.
```

2. Data Binding: Data binding is the process of binding data to the member functions.

Example of data binding: Real world example of data binding is a class. The class can access the data through the member functions.

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        for (int i = 1; i < n; i++) {
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
            dp[i][1] = max(dp[i - 1][1], -prices[i]);
        }
        return dp[n - 1][0];
    }
};

// Here Data is binded to the member functions.
```

## Polymorphism

Made of two words - “poly” which means “many”, and “morph” which means “shapes”
In OOPs, Polymorphism refers to the process by which some code, data, method, or
object behaves differently under different circumstances or contexts. Compile-time
polymorphism and Run time polymorphism are the two types of polymorphisms in
OOPs languages.

1. Compile-time Polymorphism: Compile-time polymorphism is also known as static Binding/Early Binding polymorphism. It is achieved by `function overloading and operator overloading`. **Function overloading is a feature that allows us to have more than one function with the same name but with different parameters. Operator overloading is a feature that allows us to redefine the operator’s functionality.**

Example of Compile-time Polymorphism:

- Simple Example of [Function Overloading](/FunctionOverloading.cpp):

```cpp
class Solution {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// Here, we have two functions with the same name add but with different parameters , So this function behaves differently under different circumstances or contexts.
```

**Function Overloading not works across defferent classes in cpp but works in java.**

- Simple Example of [Operator Overloading:](/OperatorOverloading.cpp)

```cpp
class complex {
private:
    int real, imag;
public:
    complex(int r = 0, int i = 0) : real(r), imag(i) {}
    complex operator + (complex obj) {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    print() {
        cout << real << " + i" << imag << endl;
    }
};

// Here, we have redefined the operator + functionality, So this operator behaves differently under different circumstances or contexts.

int main() {
    complex c1(10, 5), c2(2, 4);
    complex c3 = c1 + c2;
    c3.print();
}
```

- Compile time polymorphism, also known as Static Polymorphism, refers to the type of Polymorphism that happens at compile time.
  What it means is that the compiler decides what shape or value has to be taken by the entity in the picture.

2. [Run-time Polymorphism](/FunctionOverriding.cpp): Run-time polymorphism is also known as Dynamic Binding/Late Binding . It is achieved by `function overriding`. **Function overriding is a feature that allows us to have a same function in the derived class which is already present in the base class.**

Runtime polymorphism, also known as Dynamic Polymorphism, refers to the type of Polymorphism that happens at the run time.What it means is it can't be decided by the compiler. Therefore what shape or value has to be taken depends upon the execution. Hence the name Runtime Polymorphism.

So, What happens is that if same function is present in the base class and the derived class, and we create a pointer of the base class and assign the address of the derived class object to it, then the function in the derived class is called using the pointer of the base class then it calls the function of derived class not the base class So, we use the virtual keyword in the base class function which is overridden in the derived class so function is called not the bases of type of pointer but the type of object.

Example of Run-time Polymorphism:

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog Sound" << endl;
    }
};

class Cat : public Animal {

public:
    void sound() {
        cout << "Cat Sound" << endl;
    }
};

int main() {
    Animal *a;
    Dog d;
    Cat c;
    a = &d;
    a->sound();
    a = &c;
    a->sound();
}

// Here, we have a same function sound in the derived class which is already present in the base class, So this function behaves differently under different circumstances or contexts.
```

**So, without the virtual keyword, the function is called on the bases of the pointer type, not on the bases of the object it pointed to which is called early binding or static binding.But with the virtual keyword, the function is called on the bases of the object it pointed to, which is called late binding or dynamic binding.**

## Data Abstraction and Date hiding difference :

Data Abstraction is a concept of hiding the internal details and showing only the necessary things to the user. Data Hiding is a concept of hiding the data from the outside world and can only be accessed through the member functions.

Both are implemented in the same way in the code. But the differne is in the purpose of use. Data Abstraction is used to show only the necessary things to the user and Data Hiding is used to hide the data from the outside world by not allowing to access the data directly by using the different access specifiers.

## Static members and Static functions:

Static members and Static functions are the members of the class that can be accessed without creating the object of the class.Just by writing static keyword before the member or function.

Example of Static members and Static functions:

```cpp
class Solution {
public:
    static int x;
    static void fun() {
        cout << "Static Function" << endl;
    }
};
```

## interface

Interface is a class that has only pure virtual functions. It is used to achieve multiple inheritance in C++.

Example of Interface:

```cpp

class Interface {

public:
    virtual void fun() = 0;
};

class A : public Interface {
public:
    void fun() {
        cout << "Function of Interface" << endl;
    }
};

int main() {
    Interface *i = new A();
    i->fun();
}

// Here, Interface is a class that has only pure virtual functions and A is a class that implements the Interface class.
```

Using Interface, we can achieve multiple inheritance in C++.

## Friend Function

Friend function is a function that is not a member of the class but can access the private and protected members of the class.
