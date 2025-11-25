#include "../../c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Home page", "../");

    custom_tag("center");
    {
        h1("Welcome to the example page using c2html.");
        custom_tag("div height=500px", .css_class = "spin");
        add_img("images/gd_my_passion.webp", .width = "300px");
        custom_tag("div", .close = true);
        br_repeat(3);
        button("Apply epic cursor", .id = "changeCursorBtn", .css_class = "custom-button");
    }
    custom_tag("center", .close = true);
    custom_tag("hr");
    br();

    custom_tag("center");
    {
        add_text("dis webpag e is  ");
        span("AMAZING", .css_class = "String");
        add_text(" cuz itz maed with ", .do_br = true);
        span("C ", .css_class = "StorageClass");
        add_text("(epic langage)", .strong = true);
        br_repeat(2);

        span("My reaction to this page:", .css_class = "big");
        br();

        add_video("images/video.mp4", .type = "video/mp4", .id = "myReaction", .width = "300px", .height = "350px");
    }
    custom_tag("center", .close = true);

    br();

    custom_tag("hr");
    add_img("images/underconstruction.gif", .width = "150px");

    end_file(&index);
    return 0;
}
