#include <drivers/video/Framebuffer.h>
#include <limine.h>
#include <util/string.h>

static struct limine_terminal* terminal;

static volatile struct limine_framebuffer_request framebuffer_req = {
    .id = LIMINE_FRAMEBUFFER_REQUEST,
    .revision = 0
};


static volatile struct limine_terminal_request terminal_request = {
    .id = LIMINE_TERMINAL_REQUEST,
    .revision = 0
};


void kwrite(const char* str) {
    static uint8_t first_call = 1;

    if (first_call)
        terminal = terminal_request.response->terminals[0];

    terminal_request.response->write(terminal, str, strlen(str));
}
