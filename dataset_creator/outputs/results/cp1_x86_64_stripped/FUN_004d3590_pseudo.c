
ulong FUN_004d3590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = FUN_004d6010();
  uVar3 = FUN_004d6140(param_1);
  uVar4 = FUN_00542360(uVar3,param_2,param_3);
  if (((int)uVar4 != 0) && (uVar4 = 1, 0 < lVar2)) {
    iVar1 = FUN_00548af0(param_2,param_3,"priv_len",lVar2);
    return (ulong)(iVar1 != 0);
  }
  return uVar4;
}

