#include "../../c2html.h"

int main(void) {

    c2html_init("../index.html",
                .css_path = "style.css",
                .js_path = "script.js",
                .title = "Sample page");

    with_tag(center) {
        with_tag(h1) { add_text("Welcome to the eample page using c2html."); }
        with_tag(h3) { 
            add_text(text_format("with c2html version %d.%d.%d",
                        C2HTML_VERSION_MAJOR, C2HTML_VERSION_MINOR, C2HTML_VERSION_PATCH));
        }

        push_tag(div heigth=500px, .css_class = "spin");
        push_tag(img, .src = "images/gd_my_passion.webp", .width = 300);
        pop_tag(div);

        br_repeat(3);


        push_tag(button, .id = "changeCursorBtn", .css_class = "custom-button");
        add_text("Apply epic cursor");
        pop_tag(button);
    }

    push_tag(hr, .no_close = true);
    br();

    with_tag(center) {
        add_text("dis webpag e is  ");
        with_tag(span, .css_class = "String") add_text("AMAZING");
        add_text("  cuz is maed with ");
        br();
        with_tag(span, .css_class = "StorageClass") { add_text("C "); }
        with_tag(strong) add_text("(epic language)");
        br_repeat(2);

        with_tag(span, .css_class = "big") add_text("My reaction to this page:");
        br();

        push_tag(video controls, .src = "images/video.mp4", .type = "video/mp4", .id = "myReaction", .width = 300, .height = 350);
        pop_tag(video);

        push_tag(hr, .no_close = true);

        with_tag(p) add_text("For loop using add_text(), and text_format()");
        br();

        for(int i = 0; i < 10; ++i) {
            add_text("Line %d", i);
            br();
        }
        br();

        for(int i = 5; i > 0; --i) {
            const char *tag = text_format("h%d", i);
            push_ftag(tag);
            add_text("h%d\n", i);
            pop_ftag(tag);
        }
        br();

        with_tag(h1, .id = "roblox") { add_text("if this is showing up ID is NOT working"); }

        br();

        with_tag(h1) { add_text("First line from lorem_ipsum.txt"); }

        TextLines lorem_ipsum = read_file("lorem_ipsum.txt");

        for(int i = 0; i < lorem_ipsum.count -8; ++i) {
            add_text(lorem_ipsum.lines[i]);
        }
    }

    br();

    push_tag(hr, .no_close = true);

    with_tag(center) {
        push_tag(img, .width = 150, .src = "images/underconstruction.gif");
    }

    c2html_end_file();
    return 0;
}
