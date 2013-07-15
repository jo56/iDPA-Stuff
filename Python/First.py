#Hello World!
print "hello world"
swag = 9001
print swag
print """the
cat
is
great"""
hello = r"This is a rather long string containing\n\
several lines of text much as you would do in C."
print hello

word = "word"
print word
print word[0]
print word[1]

print word[2:]
print word[:2]
print word[1:3]

print "What?! " + str(20) + " Why?!"
print "What?!"*500

print word[-1]
print word[-2]
print word[-3]
print word[-4]

a = 12
a = 3.14151674923820841
a = "bannana"
a = True
a = "swag" * 1
print a

a = ["food"]
#length of list
print len(a)

#if statements
x = int(raw_input("Please enter an integer"))
if x < 0:
    x = 0
    print 'Negative changed to zero'
elif x == 0:
    print 'Zero'
elif x == 1:
    print 'Single'
else:
    print 'More'

while True:
    n = raw_input("Please enter 'hello':")
    if n.strip() == 'hello':
        break

#for loops
words = ['cat', 'window', 'defenestrate']
for w in words:
    print w, len(w)
    #note: regular print is println, the comma prevents the newline character

range(10)

a = ['Mary', 'had', 'a', 'little', 'lamb']
for i in range(len(a)):
    print i, a[i]

#else clause on a loop
def primes(n):
    for n in range(2, n):
         for x in range(2, n):
             if n % x == 0:
                 break
         else:
             print n, 'is a prime number'
#Classes
class MyClass:
    def __init__(self):
        self.data = []

    i = 12345
    def f(self):
        return 'hello world'
#Making an object
x = MyClass()

# Function defined outside the class
def f1(self, x, y):
    return min(x, x+y)

class C:
    f = f1
    def g(self):
        return 'hello world'
    h = g

varObj = C()
print varObj.f(2,10)
print varObj.h()

#A tuple consists of a number of values separated by commas, for instance:
t = 12345, 54321, 'hello!'  #this is tuple packing
print t[0]
print t
u = t, (1, 2, 3, 4, 5)
print u

#empty tuple
empty = ()

#tuple unpacking
x, y, z = t

print x, y, z

#function that uses tuples
def swap(a,b):
   return b,a  #WHAT??!!, returning TWO values!

a=2
b=5
a,b = swap(a,b)
print str(a) + ", " + str(b)

#or an easier way to swap
a, b = b, a  #woah

#dictionary
tel = {'jack': 4098, 'sape': 4139}
tel['guido'] = 4127
print tel['jack']
del tel['sape']   #delete it from list
print tel.keys()        #print all keys
print 'guido' in tel    #returns true if 'guido' is a key in the dictionary

x=4
if x > 1 and x < 10:
    print "true"
if (1 < x < 10):
    print "true"