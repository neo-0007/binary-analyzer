
undefined8 FUN_0061d0a0(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar1 = *param_1;
  uVar3 = thunk_FUN_007129d0(lVar1);
  if (uVar3 < 4) {
    return 0;
  }
  iVar2 = thunk_FUN_00712ab0(lVar1,&DAT_0081cd0e,4);
  if (iVar2 == 0) {
    pcVar4 = (char *)(lVar1 + 4);
    uVar5 = 1;
  }
  else {
    if (uVar3 == 4) {
      return 0;
    }
    iVar2 = thunk_FUN_00712ab0(lVar1,"ASN1:",5);
    if (iVar2 != 0) {
      return 0;
    }
    pcVar4 = (char *)(lVar1 + 5);
    uVar5 = 2;
  }
  while (iVar2 = FUN_005466b0((int)*pcVar4,8), iVar2 != 0) {
    pcVar4 = pcVar4 + 1;
  }
  *param_1 = (long)pcVar4;
  return uVar5;
}

