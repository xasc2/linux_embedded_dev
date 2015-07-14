volatile 作用:
确保本条指令不会因为编译器的优化而省略,要求每次直接读取

int volatile GPMDAT;

//GPMDAT = 0x55;
//GPMDAT = 0x57;
//GPMDAT = 0x58;
GPMDAT = 0x59;

//1)设备的硬件寄存器
//2)一个中断服务子程序中会访问到的变量
//3)多线程应用中被几个任务共享的变量

 
