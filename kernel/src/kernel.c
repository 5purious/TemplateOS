#include <stdint.h>
#include <stddef.h>
#include <limine.h>
#include <debug/log.h>

static void done(void) {
    for (;;) {
        __asm__("hlt");
    }
}

void _start(void) { 
    log("Coming soon!\n", S_INFO);

    done();
}
