# c2html

A static html page generator made in C



## Usage of the library:

I prefer writing c than html, and doing so, it also allows me to use some C features in to making html 

This library DOES NOT generate css and / or Javascript, that is up to the user.


## Getting started

The setup of the library is very easily explainable, and you can pretty much just figure everything out by looking at the examples at docs/ or the github-pages deploy.
Here is the most basic setup of the library usage;

```c 
#include "c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = NULL;
    /* [OPTIONAL] path to your css and and js files */

    C2HTML_OBJ(index, css_file, js_file);
    /* [MANDATORY] name of the c2html object that describes the page, and passes the css and js file paths, you're left with a pointer named "index" in this case */

    setup_file(&index, "Page title goes here", "../path/where/the/page/is/saved");
    /* [MANDATORY] */

    h1("Hello, World!");

    end_file(&index);
    /* [MANDATORY] */

    return 0;
}

```


## Structure of the library

- One .c file = 1 html file

Each c source file should equal one html page.

- Do not care about memory alocations

Each file will be compiled on its own, and run to create its respective html file, the lifetime of each program will idealy be under a second
and its all free'd at the end, so leak as much memory as you need.

- The generated html dosen't need to be pretty

You're meant to look at the C code, not the generated html one.

