#define GPM4CON (*(volatile u32 *)0x11231000)
#define GPM4DAT (*(volatile u32 *)0x11231000)

GPM4CON = (GPM4COM & ~0xffff) | 0x1111
GPM4DAT &= ~0xf

void (*signal(int signum, void (*handler)(int)))(int);

