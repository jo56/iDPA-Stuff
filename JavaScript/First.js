//use control-shift-j in crhome to use javascript

//Hello World
document.write("Hello World!")

// Javascript has one number type (which is a 64-bit IEEE 754 double).
3 // = 3
1.5 // = 1.5

 // All the basic arithmetic works as you'd expect.
1 + 1 // = 2
8 - 1 // = 7
10 * 2 // = 20
35 / 5 // = 7

// Including uneven division.
5 / 2 // = 2.5

// Bitwise operations also work; when you perform a bitwise operation your float
// is converted to a signed int *up to* 32 bits.
1 << 2 // = 4

// Precedence is enforced with parentheses.
(1 + 3) * 2 // = 8

// There are three special not-a-real-number values:
Infinity // result of e.g. 1/0
-Infinity // result of e.g. -1/0
NaN // result of e.g. 0/0

// There's also a boolean type.
true
false

// Strings are created with ' or ".
'abc'
"Hello, world"

// Negation uses the ! symbol
!true // = false
!false // = true

// Equality is ==
1 == 1 // = true
2 == 1 // = false

// Inequality is !=
1 != 1 // = false
2 != 1 // = true

// More comparisons
1 < 10 // = true
1 > 10 // = false
2 <= 2 // = true
2 >= 2 // = true

// Strings are concatenated with +
"Hello " + "world!" // = "Hello world!"

// and are compared with < and >
"a" < "b" // = true

// Type coercion is performed for comparisons...
"5" == 5 // = true

// ...unless you use ===
"5" === 5 // = false

// You can access characters in a string with charAt
"This is a string".charAt(0)

// There's also null and undefined
null // used to indicate a deliberate non-value
undefined // used to indicate a value that hasn't been set yet

// null, undefined, NaN, 0 and "" are falsy, and everything else is truthy.
// Note that 0 is falsy and "0" is truthy, even though 0 == "0".

//////////////VARIABLES/////////////////

// Variables are declared with the var keyword. Javascript is dynamically typed,
// so you don't need to specify type. Assignment uses a single = character.
var someVar = 5

// if you leave the var keyword off, you won't get an error...
someOtherVar = 10

// ...but your variable will be created in the global scope, not in the scope
// you defined it in.

// Variables declared without being assigned to are set to undefined.
var someThirdVar // = undefined

// There's shorthand for performing math operations on variables:
someVar += 5 // equivalent to someVar = someVar + 5; someVar is 10 now
someVar *= 10 // now someVar is 100

// and an even-shorter-hand for adding or subtracting 1
someVar++ // now someVar is 101
someVar-- // back to 100

/////ARRAYS - I LOVE ARRAYS LIKE I LOVE KITTENS, THE MORE THE BETTER
// Arrays are ordered lists of values, of any type.
var myArray = ["Hello", 45, true]
myArray[0] = "Hello"

// JavaScript's objects are equivalent to 'dictionaries' or 'maps' in other
// languages: an unordered collection of key-value pairs.
{key1: "Hello", key2: "World"}


// Keys are strings, but quotes aren't required if they're a valid
// JavaScript identifier. Values can be any type.
var myObj = {myKey: "myValue", "my other key": 4}

// ... or using the dot syntax, provided the key is a valid identifier.
myObj.myKey // = "myValue"

// Objects are mutable; values can be changed and new keys added.
myObj.myThirdKey = true

// If you try to access a value that's not yet set, you'll get undefined.
myObj.myFourthKey // = undefined

///////////////////////////////////
// 3. Logic and Control Structures

// The if structure works as you'd expect.
var count = 1
if (count == 3){
    // evaluated if count is 3
} else if (count == 4) {
    // evaluated if count is 4
} else {
    // evaluated if it's not either 3 or 4
}

// As does while.
while (true) {
    // An infinite loop!
}
var input
do {
    input = getInput()
} while (input < 100)

//for loop 
for (var i=0;i<5;i++)
{ 
document.write("hello");
}

// && is logical and, || is logical or
if (house.size == "big" && house.colour == "blue")
{
    house.contains = "bear"

}
if (colour == "red" || colour == "blue")
{
    // colour is either red or blue
}

// JavaScript functions are declared with the function keyword.
function myFunction(thing)
{
    return thing.toUpperCase()
}
myFunction("foo") // = "FOO"

// Functions can also be defined "anonymously" - without a name:
function(thing)
{
    return thing.toLowerCase()
}
// (we can't call our function, since we don't have a name to refer to it with)

// JavaScript functions are first class objects, so they can be reassigned to
// different variable names and passed to other functions as arguments - for
// example, when supplying an event handler:
function myFunction(){
    // this code will be called in 5 seconds' time
}
setTimeout(myFunction, 5000)

//anonymous function called in 5 seconds
setTimeout(function(){

// this code will be called in 5 seconds' time
}, 5000)

// JavaScript has function scope; functions get their own scope but other blocks
// do not.
if (true){
    var i = 5
}
i // = 5 - not undefined as you'd expect in a block-scoped language

// This has led to a common pattern of "immediately-executing anonymous
// functions", which prevent temporary variables from leaking into the global
// scope.
function(){
    var temporary = 5
    // We can access the global scope by assiging to the 'global object', which
    // in a web browser is always 'window'. The global object may have a
    // different name in non-browser environments such as Node.js.
    window.permanent = 10
    // Or, as previously mentioned, we can just leave the var keyword off.
    permanent2 = 15
}()

// One of JavaScript's most powerful features is closures. If a function is
// defined inside another function, the inner function has access to all the
// outer function's variables.
function sayHelloInFiveSeconds(name){
    var prompt = "Hello, " + name + "!"
    function inner(){
        alert(prompt)
    }
    setTimeout(inner, 5000)
    // setTimeout is asynchronous, so this function will finish without waiting
    // 5 seconds. However, once the 5 seconds is up, inner will still have
    // access to the value of prompt.
}
sayHelloInFiveSeconds("Adam") // will open a popup with "Hello, Adam!" in 5s

///////////////////////////////////
// 5. More about Objects; Constructors and Prototypes

// Objects can contain functions.
var myObj = {
    myFunc: function(){
        return "Hello world!"
    },
    myVar: 7
}
myObj.myFunc() // = "Hello world!"


function MyObject()
{
    this.vary = 5
}