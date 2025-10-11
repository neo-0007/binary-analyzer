
void FUN_00435030(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00434fc0(param_1,param_2);
  if (iVar1 != 0) {
    *(long *)(param_1 + 0xd0) = *(long *)(param_1 + 0xd0) << 1;
  }
  return;
}

