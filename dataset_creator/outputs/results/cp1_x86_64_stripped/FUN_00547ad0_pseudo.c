
ulong FUN_00547ad0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*plVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00547840(param_1,plVar1,1);
  if ((int)uVar2 != 0) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),"../crypto/packet.c",0x14e);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}

