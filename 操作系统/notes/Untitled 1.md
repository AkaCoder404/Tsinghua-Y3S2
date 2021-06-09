# Labs

### # Lab  1

## GUIDE

### what is a bootloader? 

a special operating system software that loads into the working memory of a computer after start-up

where is startup location? 0x80200000 as required by rustbi， 第一行执代码的位置

S 态 与 M态？ riscv starts in M mode, use rustsbi to switch from M to S as it makes interrupt request

SBI? Supervisor Binary Interface Specification

### machine mode vs supervisor mode vs user mode?

M-mode or machine mode has the highest privilege's, interacts directly with the hardware

S-mode or supervisor mode, abstract much of the machine architecture, program the os using RISCV specification, In supervisor mode the CPU is allowed to execute privileged instructions: for example, enabling and disabling interrupts, reading and writing the register that holds the address of a page table, etc.

U-mode or user mode has the lowest privileges

### why supervisor mode?

without supervisor mode, errors in user level will trap the machine mode, often causing a loop of traps, but SBI helps delegate user traps to supervisor mode, so our OS can handle it

## EXERCISE

create basic colored LOG function

# Lab 2

enter user mode! severely limited, can only run one task at a time

no file system yet, so we have to load user program by directly packaging user program into kernal image

cmake to complete construction of user programs

```link_app.s``` to get user app location, however we cannot jump directly to app_n_start to run directly, because when the user program is compiled, it will assume the the program is in a specific location of virtual memory, and since we don't have a virtual memory mechanism yet. Therefore we also need to load the user program to the specified physical memory location before running 

can we jump directly to beginning program? 

- nope, in order to protect itself, OS needs to be isolated from the user program at the privilege level (U state and S state), switching between two states cannot pass function call. 
- switching between execution streams require state preservation and restoration, this is defined in trap frame structure in ```trap.h```
- 

```stvec``` saves address to jump to after interrupt, entry address for interrupt handler































