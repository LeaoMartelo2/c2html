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

    return 0;
}
