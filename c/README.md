# C Programming 

Welcome to the **C Programming** section of my learning repository! 👋
> I have, as a matter of habit, been accustomed to compiling such notes, cheatsheets, and codes solely for my own use, having little inclination to share them without good reason. Should I, however, choose to make these materials available to you, you may rest assured that the act was **by no means arbitrary.** Either I consider you a person of some consequence, or you have demonstrated genuine curiosity and a particular aptitude for learning that merits my attention. I do not part with the fruits of my own efforts indiscriminately, nor do I make a habit of imparting them to persons of no merit; I trust you shall appreciate the distinction. 

This folder contains C programs created while learning and practicing the fundamentals of the C programming language.

## 📚 What You'll Find

- Basic C programs and examples
- Programming practice
- Code to understand C syntax and concepts
- Hands-on learning exercises
- [Basic Rules & Syntax]{syntax.md}
- [A juicy cheatsheet]{cheatsheet.md}

## 🛠️ Requirements

- A C compiler, such as GCC
- A code editor, such as Visual Studio Code

## Note
-Header files in C are stored under the extension .h For eg:
```
 never_gonna_give_you_up.h
```
-Source Code  files in C are stored under the extension .c For eg:
```
 never_gonna_let_you_down.c
```
### History of C and yadayada..
- C is a general-purpose, mid-level programming language.
- Developed by Dennis M. Ritchie in 1972 at Bell Laboratories.
- Initially created for developing the UNIX operating system.

<details>
  <summary>OPTIONAL[some more boring facts]</summary>
  
 - Known for its speed, efficiency, and flexibility.
 - Used in operating systems, embedded systems, and compilers.
 - Supports structured programming.
 - Provides pointers and direct memory access.
 - Portable across different platforms.
 - Influenced languages like C++, Java, and C#.
 - Widely used for system programming and application development.

</details>

## Cutting the crap 
```
 #include <stdio.h> 
int main() 
{
    printf("Hello World");
    return 0;  
}
```
Soooo! What's this code

Lemme explain that easily

But first the very _obvious_ output 
```
Hello World
```
#### Head(Header)
<table width="100%">
  <tr>
    <td valign="top" width="60%" rowspan="2" style="padding-right: 20px;">
      <pre><code>#include &lt;stdio.h&gt;</code></pre>
      <p>Think of <code>#include &lt;stdio.h&gt;</code> like  Captain America. It tells the compiler(Nick fury) about all the basic functions required and  the compiler in turn assembles them before the user input code in main() is evaluated.</p>
     <p>Similarly you can assemble(call) more basic functions from the built-in libraries.</p>
     <p> For eg:<pre><code>
#include &lt;stdio.h&gt;
#include &lt;math.h&gt;

int main() 
{
    double number = 16;
    double result = sqrt(number);
    printf("Square root of %.2f is %.2f\n", number, result);
    return 0;
}
</pre></code>
Here we call the math.h library because we needed the sqrt() function</p>
    </td>
    <td align="right" valign="top" width="40%">
      <img width="100%" alt="header" src="https://github.com/user-attachments/assets/ebb59e54-9b99-48c2-9f82-2d38430a7e88" />
    </td>
  </tr>
  <tr>
    <td align="right" valign="top" width="40%">
      <img width="100%" height="auto" alt="b3qvn5" src="https://github.com/user-attachments/assets/f4d85787-c7aa-47a9-8cac-cfed062a6529" />
    </td>
  </tr>
</table>

### Main




<table width="100%">
  <tr>
    <td valign="top" width="60%" rowspan="2" style="padding-right: 20px;">
      <p> <code>main()</code> is the compulsory function that has to be defined in which the code is run
      <pre><code>
#include &lt;stdio.h&gt;
#include &lt;math.h&gt;

int main() {
 Here goes the real code 
 Hint:You start by defining the variables (int x;)
}
      </code></pre>
      </pre>
  </p>
  <tr>
    <td align="right" valign="top" width="40%">
      <img width="100%" height="auto" alt="b3qvn5" src="https://github.com/user-attachments/assets/11d58934-11e4-4c0d-b2ad-d8b66f102048" />
    </td>
  </tr>
</table>

## Some General Functions
- ```printf()```prints the given string or a variable when specified by a format specifier(%d is for int; More about this in the cheatsheet)
  
For eg:```printf("Your age is %d",age);```
- ```scanf()```scans for input value from the user (*Requires the use of pointer &)
  
For eg:```scanf("%d",&age);```

## 📈 Learning in Progress

This repository will continue to grow as I learn new concepts, solve problems, and improve my programming skills.

Happy Coding! 🍻
---

<br>

<img
  width="70%"
  alt="Footer"
  src="https://github.com/user-attachments/assets/00ef04cb-3e5c-4b6d-be10-ca6885d60f9c"/>

