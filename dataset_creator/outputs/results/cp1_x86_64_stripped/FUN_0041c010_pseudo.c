
void FUN_0041c010(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_0041bfe0();
  if (iVar1 != 0) {
    iVar1 = FUN_004222c0(DAT_0093fcf0);
    if (iVar1 != 0) {
      lVar2 = FUN_0041b500(param_1);
      FUN_004227b0(param_1,lVar2);
      DAT_0093fd00 = DAT_0093fd00 - lVar2;
      FUN_0041b580(param_1);
      FUN_004222e0(DAT_0093fcf0);
      return;
    }
    return;
  }
  FUN_0041ad60(param_1,param_2,param_3);
  return;
}

