
ulong SCT_LIST_validate(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    iVar5 = 0;
    uVar4 = 1;
    do {
      lVar2 = OPENSSL_sk_value(param_1,iVar5);
      if (lVar2 != 0) {
        uVar3 = SCT_validate(lVar2,param_2);
        if ((int)(uint)uVar3 < 0) {
          return uVar3;
        }
        uVar4 = uVar4 & (uint)uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
    return (ulong)uVar4;
  }
  return 1;
}

