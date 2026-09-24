# class Student:
#     name = "karan"

# s1 = Student()
# print(s1.name)

# class car:
#     brand = "mercedes"
#     model = 2022
#     color = "red"

# car1 = car()
# print(car1.color)

# constructor
# class Student:
#     def __init__(self, name, marks):
#         self.name = name
#         self.marks = marks
#     def avg(self):
#         sum = 0
#         for val in self.marks:
#             sum += val
#         print("Hi, ", self.name, " your marks are: ", sum/3)


# s1 = Student("lavish", [76, 91, 98])
# s1.avg()










# class Account:
#     def __init__(self, bal, acc_no):
#         self.bal = bal
#         self.acc_no = acc_no

#     def debit(self, amount):
#         self.bal -= amount
#         print("amt debited is: ", amount)

#     def credit(self, amount):
#         self.bal += amount
#         print("amount credited is: ", amount)

#     def display(self):
#         print("your new balance is: ", self.bal)

# acc1 = Account(20000, 123456)
# print(acc1.acc_no)
# print(acc1.bal)

# print(acc1.acc_no)

# acc1.credit(100)
# acc1.debit(200)
# acc1.display()
        



# class Circle:
#     def __init__(self, rad):
#         self.rad = rad

#     def area(self):
#         return 3.14*self.rad*self.rad
    
#     def par(self):
#         return 2*3.14*self.rad

# c1 = Circle(20)
# print(c1.area())
# print(c1.par())
        



# class Employee:
#     def __init__(self, role, dep, salary):
#         self.role = role
#         self.dep = dep
#         self.salary = salary

#     def showDetail(self):
#         print(self.role, self.dep, self.salary)

# class Engineer(Employee):
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#         super().__init__("eng", "cs", 500000)

# emp1 = Engineer("rajeev", 32)
# emp1.showDetail()





class order:
    def __init__(self, item, price):
        self.item = item
        self.price = price
    def __gt__(self, o2):
        return self.price > o2.price

o1 = order("chips", 20)
o2 = order("coke", 40)

print(o1>o2)

