
ulong FUN_00618f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  uint local_3c;
  
  iVar1 = FUN_004b7ba0(param_3);
  if (iVar1 != 0) {
    uVar4 = FUN_004b8190(param_1,1);
    return uVar4;
  }
  iVar1 = FUN_004b7b70(param_3);
  if (iVar1 == 0) {
    FUN_004b2c00(param_5);
    lVar3 = FUN_004b2df0(param_5);
    local_3c = 0;
    if ((lVar3 != 0) && (iVar1 = FUN_00618590(lVar3,param_2,param_4), iVar1 != 0)) {
      iVar1 = FUN_004b7bb0(param_3);
      iVar1 = iVar1 + -2;
      if (-1 < iVar1) {
        do {
          iVar2 = FUN_00618820(lVar3,lVar3,param_4,param_5);
          if ((iVar2 == 0) ||
             ((iVar2 = FUN_004b78f0(param_3,iVar1), iVar2 != 0 &&
              (iVar2 = FUN_00618cb0(lVar3,lVar3,param_2,param_4,param_5), iVar2 == 0))))
          goto LAB_00618f7d;
          bVar5 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar5);
      }
      lVar3 = FUN_004b8260(param_1,lVar3);
      local_3c = (uint)(lVar3 != 0);
    }
LAB_00618f7d:
    FUN_004b2d50(param_5);
  }
  else {
    lVar3 = FUN_004b8260(param_1,param_2);
    local_3c = (uint)(lVar3 != 0);
  }
  return (ulong)local_3c;
}

