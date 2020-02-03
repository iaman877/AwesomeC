import math
print("GCD of 3 and 6 is"+str(math.gcd(3,6)))
#----------------------------------------------
a =int(input())
if(a<=18):
    print("Under age")
else:
    print('ready for vote')
#------------------------------------------------
a =10
b= 31.7
c="aman"
typeA=type(a)
typeB=type(b)
typeC=type(c)
print(typeA)
print(typeB)
print(typeC)
#--------------------------------------------------
num = int(input("Enter the number "))
if(num>1):
    for i in range(2,num) :
        if((num % i) == 0):
            print(num,"it is not the prime number")
            break
        else:
            print(num,"it is a prime number ")
else :
     print(num,"it is a not prime number")
#--------------------------------------------------
upper = int(input("Enter upper range "))
for num in range(0,upper + 1):
    if num > 1:
        for i in range(2,num):
            if (num % i) == 0:
             break
        else:
            print(num)
#-------------------------------------------------------
num = int(input("Enter the number "))
for i in range(1,11):
    print("%d * %d = %d"%(num,i,num*i))
 #-------------------------------------------------------
char = input()
if(char == 'A' or char == 'a'):
    print("matched")
else:
    print(" not matched")
#---------------------------------------------------------
char = input()
if(char in ('A','E','I','O','U') or char in ('a','e','i','o','u')):
    print(char+'is vowel')
else:
    print(char+"is not vowel")
