
uint FUN_005a0810(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = (undefined4 *)FUN_0059ff30();
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 2) = param_2;
    uVar1 = FUN_0059fea0(puVar3);
  }
  else {
    *puVar3 = 2;
    *(undefined8 *)(puVar3 + 2) = param_2;
    uVar1 = FUN_0059fea0(puVar3);
  }
  if ((uVar1 != 0) && (uVar1 = FUN_0059f880(param_1), uVar1 != 0)) {
    lVar4 = FUN_005a06f0(*(undefined8 *)(param_1 + 8),puVar3);
    if (lVar4 == 0) {
      iVar2 = FUN_00435f80(*(undefined8 *)(param_1 + 8),puVar3);
      uVar1 = (uint)(iVar2 != 0);
      FUN_0059f890(param_1);
      if (iVar2 != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = 1;
      FUN_0059f890(param_1);
    }
    FUN_0059f740(puVar3);
    return uVar1;
  }
  *puVar3 = 0;
  FUN_0059f740(puVar3);
  return uVar1;
}

