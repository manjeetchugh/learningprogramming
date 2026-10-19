## C Language Cheatsheet
 > The points where there are clickable pockets of text. These are OPTIONAL from an exam Point of View.
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
      <p> <code>main()</code> is the compulsory function that has to be defined in which the code is run </p>
  <tr>
    <td align="right" valign="top" width="40%">
      <img width="100%" height="auto" alt="b3qvn5" src="https://github.com/user-attachments/assets/11d58934-11e4-4c0d-b2ad-d8b66f102048" />
    </td>
  </tr>
</table>
<img
  width="70%"
  alt="Footer"
  src="https://github.com/user-attachments/assets/00ef04cb-3e5c-4b6d-be10-ca6885d60f9c"/>
