#include "../c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Home page", "page");

    custom_tag("center");
    {
        h1("Welcome to the example page.");
        add_img("images/gd_my_passion.webp", .width = "500px");
        br();
        button("Apply epic cursor", .id = "changeCursorBtn", .css_class = "custom-button");
    }
    custom_tag("center", .close = true);
    custom_tag("hr");
    br();

    custom_tag("center");
    {
        add_text("This webpage is ");
        span("AMAZING", .css_class = "String");
        add_text(" cuz its made with ", .do_br = true);
        span("C", .css_class = "StorageClass");
        br_repeat(2);

        span("My reaction to this page:", .css_class = "big");
        br();

        add_video("images/video.mp4", .type ="video/mp4", .id = "myReaction", .width = "300px", .height = "350px");

    }
    custom_tag("center", .close = true);

    br_repeat(10);

    end_file(&index);
    return 0;
}
