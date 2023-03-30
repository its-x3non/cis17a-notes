## Quiz 14.1
### Question 1
```c++
class Counter
{
    private:
        int counter;
        int limit;
        static int nCounters;
    public:
        Counter(int c, int l)
        {
            counter = c;
            limit = l;
            nCounters++;
        }
        
    void increment()
    { 
        if (counter < limit)
            counter++;
    }
    
    void decrement()
    {
        if (counter > 0)
            counter--;
    }
    
    int getValue()
    { return counter; }
    
    static int getNCounters()
    { return nCounters; }
};

int Counter::nCounters = 0;
```

#### [Next Section (14.2)](14.2%20-%20Friends%20of%20Classes.md)

## Quiz 14.2
### Question 1
```c++
class Window
{
    private:
        int width;
        int height;
    public:
        Window(int w, int h)
        { width = w;
          height = h; }
          
        friend bool areSameSize(Window a, Window b)
        {
            if((a.height == b.height) && (a.width == b.width))
                return true;
            else
                return false;
        }
};

```

#### [Next Section (14.3)](14.3%20-%20Memberwise%20Assignment.md)

## Quiz 14.4
### Question 1
```c++
GraphicProgram(const GraphicProgram &a)
{ executableName=a.executableName;
  windowPtr=a.windowPtr->clone(); }
```

####  [Next Section (14.5)](14.5%20-%20Operator%20Overloading.md)

## Quiz 14.5
### Question 1
```c++
friend istream &operator >> (istream & ins, Window & obj)
{
    int w, h;
    
    ins >> w;
    ins >> h;
    obj.height = h;
    obj.width = w;
    
    return ins;
}
```

### Question 2
```c++
friend ostream &operator << (ostream & out, const Window & obj)
{
 out << "a (" << obj.width << " x " << obj.height << ") window";
 return out;
}
```
# Programming Project