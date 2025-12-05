#include "../../c2html.h"

int main(void) {

    const char *css_file = "style.css";
    const char *js_file = "script.js";

    C2HTML_OBJ(index, css_file, js_file);
    setup_file(&index, "Sample page", "..");

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

        custom_tag("hr");

        add_text("This is a testing and example page for using c2html, and testing if the api needs improvements", .do_br = true);
        add_text("everything should be working fine on this page");

        custom_tag("hr");

        add_text("For loop using add_text(); and text_format();", .do_br = true, .do_paragraph = true);

        for (int i = 0; i < 10; ++i) {
            add_text(text_format("Line %d", i),
                     .do_br = true);
        }
    }
    custom_tag("center", .close = true);

    br();

    custom_tag("hr");
    custom_tag("center");
    add_img("images/underconstruction.gif", .width = "150px");
    custom_tag("center", .close = true);

    end_file(&index);
    return 0;
}
