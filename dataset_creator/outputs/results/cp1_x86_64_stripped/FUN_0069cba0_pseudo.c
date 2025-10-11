
undefined4 FUN_0069cba0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(code **)(*param_1 + 0x48) == FUN_0069c9e0) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 != -1) {
    uVar1 = *(undefined4 *)param_1[2];
    param_1[2] = (long)((undefined4 *)param_1[2] + 1);
    return uVar1;
  }
  return 0xffffffff;
}

