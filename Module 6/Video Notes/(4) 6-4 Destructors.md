#Module6 #VideoNotes 
# 6-4 Destructors
A lot of what he discussed here can be found more in detail in certain sections of the [Pearson Notes](../Pearson%20Notes), which you can click on certain text to go there.

# [13.9 - Destructors](../Pearson%20Notes/13.9%20-%20Destructors.md)
## Destructors
- Member function automatically called when an object is destroyed
- Destructor name is `~classname`
- Has no return type; takes no arguments
- Only one destructor per class, i.e., it cannot be overloaded
- If constructor allocates dynamic memory, destructor should release it

## [Constructors, Destructors, and Dynamically Allocated Objects](../Pearson%20Notes/13.9%20-%20Destructors.md#Destructors-and-Dynamically-Allocated-Class-Objects)
- When an object is dynamically allocated with the new operator, its constructor executes: `Rectangle *r = new Rectangle(10,20);`
- When the object is destroyed, its destructor executes: `delete r;`

