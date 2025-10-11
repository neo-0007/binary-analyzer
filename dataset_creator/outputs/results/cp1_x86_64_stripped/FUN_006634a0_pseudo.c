
ulong FUN_006634a0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 != -1) {
    uVar2 = FUN_00702600();
    return uVar2;
  }
  iVar1 = FUN_006fd670(*(undefined8 *)(param_1 + 0x40));
  return (ulong)-(uint)(iVar1 != 0);
}

