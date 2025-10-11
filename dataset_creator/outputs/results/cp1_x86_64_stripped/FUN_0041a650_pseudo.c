
void FUN_0041a650(void)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_0041aec0(0x10,"../crypto/initthread.c",0x3b);
  uVar2 = 0;
  DAT_0093fc90 = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar4 = FUN_00436410();
    *plVar3 = lVar4;
    plVar3 = DAT_0093fc90;
    lVar4 = FUN_00422240();
    plVar1 = DAT_0093fc90;
    plVar3[1] = lVar4;
    if ((*plVar1 == 0) || (uVar2 = 1, plVar1[1] == 0)) {
      FUN_004360b0();
      FUN_00422300(DAT_0093fc90[1]);
      FUN_0041ad60(DAT_0093fc90,"../crypto/initthread.c",0x44);
      DAT_0093fc90 = (long *)0x0;
      DAT_0093fc88 = 0;
      return;
    }
  }
  DAT_0093fc88 = uVar2;
  return;
}

