
/* WARNING: Removing unreachable block (ram,0x007a2c40) */
/* WARNING: Removing unreachable block (ram,0x007a2c19) */
/* WARNING: Removing unreachable block (ram,0x007a2c48) */

void FUN_007a2be0(undefined8 param_1,int param_2,long param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 ^ 0x86;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = param_4 ^ 0x8d;
  }
  syscall();
                    /* WARNING: Subroutine does not return */
  FUN_00703110("The futex facility returned an unexpected error code.\n",uVar1);
}

