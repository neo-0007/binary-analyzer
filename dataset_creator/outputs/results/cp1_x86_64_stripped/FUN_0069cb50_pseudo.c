
ulong FUN_0069cb50(long *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(code **)(*param_1 + 0x48) == FUN_0069c950) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*param_1 + 0x48))();
  if (iVar2 != -1) {
    bVar1 = *(byte *)param_1[2];
    param_1[2] = (long)((byte *)param_1[2] + 1);
    return (ulong)bVar1;
  }
  return 0xffffffff;
}

