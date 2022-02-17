# ShineOS
ShineOS, the new perfect OS


# Lets Shine with ShineOS!
this os, for now, is command-line based and the drivers only support text graphics, but were planing on supporting it at mid 2022.

# based on FrOS
ShineOS is based on [FrOS](https://github.com/FRosner/FrOS/).

# 32-bit
ShineOS is a x86_32 operating system, support all up-to-date graphics, (there is only no driver for them!)

# Components
ShineOS contains the following components:
1. Boot loader
2. Operating system kernel, including
    1. ISRs to handle CPU interrupts
    2. VGA driver
    3. Keyboard driver
    4. Shell
    5. Dynamic memory allocation

# Installation guide

in `Debian` based os's:

`sudo apt install qemu nasm gcc`

you can also find these packages on other package managers of your use.

now, type:

`cd PATH_TO_SHINEOS`

NOTE: change `PATH_TO_SHINEOS` accordingly.

type:

`make run`

to compile and run the os in qemu, 

type:

`make debug` 

for debug purposes.

## Additional Resources

- [Writing a Simple Operating System — from Scratch](https://www.cs.bham.ac.uk/~exr/lectures/opsys/10_11/lectures/os-dev.pdf)
- [OS Dev Wiki](https://wiki.osdev.org/Meaty_Skeleton)
- [JamesM's Kernel Development Tutorials](https://web.archive.org/web/20160412174753/http://www.jamesmolloy.co.uk/tutorial_html/index.html)
- [BrokenThorn Entertainment's Operating System Development Series](http://www.brokenthorn.com/Resources/OSDevIndex.html)
- [The Little Book About OS Development](https://littleosbook.github.io/)
- [C Memory Allocation Functions](http://www.sunshine2k.de/articles/coding/cmemalloc/cmemory.html)
