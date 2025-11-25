# c2html

A static html page generator made in C



## Usage of the library:

I prefer writing c than html, and doing so, it also allows me to use some C features in to making html (dinamically making static pages)

This library DOES NOT generate css and / or Javascript, that is up to the user.

### Example at docs/ or at the github-pages deploy


## Structure of the library

- One .c file = 1 html file

Each c source file should equal one html page.

- Do not care about memory alocations

Each file will be compiled on its own, and run to create its respective html file, the lifetime of each program will idealy be under a second
and its all free'd at the end, so leak as much memory as you need.

- The generated html dosen't need to be pretty

You're meant to look at the C code, not the generated html one.

