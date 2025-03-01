# studentHeap - (part 1)

## Student Data
```
- firstName

- lastName

- street

- city

- state

- zip

- birthdate (mm/dd/yyyy)

- expected grad date (mm/dd/yyyy)

- credit hours completed (integer)


All data will be split into three classes:
Date()
Address()
Student()
```


## Date()
```
dateString = "00/00/0000"

printDate()
  std::string monthNames[] = {January - December}
```

## Address()
```
street = "";
city = "";
state = "";
zip = "";

Address::printAddress()
```

## Student()
```
strint studentString
string firstName
string lastName
```


# Student Heap - (part 2)
```
Keeping the three class -> Address(), Data(), Student()

loadStudents(SV)
printStudents(SV)
showStudent(SV)
findStudents(SV)
delStudents(SV)
menu()
```

## main.cpp
```
0) quit
1) print all student names
2) print all student data
3) find a student (by last name)

if 0
    program ends
    print "Goodbye!"

if 1
    printStudentNames (just names)

if 2
    printStudents (all student data)

if 3
    print "What is the last name?"
    print out the student with that last name

    if no student with that last name
    print "There is no one with that last name. Sorry!"
    take back to menu
```
  





