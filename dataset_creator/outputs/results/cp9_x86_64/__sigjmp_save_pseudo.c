
undefined8 __sigjmp_save(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    return 0;
  }
  iVar1 = sigprocmask(0,(sigset_t *)0x0,(sigset_t *)(param_1 + 0x48));
  *(uint *)(param_1 + 0x40) = (uint)(iVar1 == 0);
  return 0;
}

