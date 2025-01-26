Enum ==> Enum is a user-defined data type consisting of integral constants.
--------------------------
Example:
enum Weekday 
{
    Sunday, //0
    Monday, //1
    Tuesday, 
    Wednesday = 5, 
    Thursday, 
    Friday, 
    Saturday
};
// Enum values (Sunday, Monday, etc.) are automatically assigned integer values starting from 0.
// By explicitly setting Wednesday = 5, subsequent values increment from 1 (Thursday = 6, Friday = 7, and so on).
  

