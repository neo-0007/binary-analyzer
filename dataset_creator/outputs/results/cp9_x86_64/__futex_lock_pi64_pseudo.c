
/* WARNING: Removing unreachable block (ram,0x00799310) */
/* WARNING: Removing unreachable block (ram,0x007992e9) */
/* WARNING: Removing unreachable block (ram,0x00799318) */

void __futex_lock_pi64(undefined8 param_1,int param_2,long param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 ^ 0x86;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_4 ^ 0x8d;
  }
  syscall();
                    /* WARNING: Subroutine does not return */
  __libc_fatal("The futex facility returned an unexpected error code.\n",uVar1);
}

