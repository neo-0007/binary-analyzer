
bool FUN_00471cf0(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar3 = FUN_004ee2a0(param_1);
  lVar4 = FUN_004b2a70(uVar3);
  if (lVar4 == 0) {
    return false;
  }
  if ((param_2 & 4) == 0) {
LAB_00471d5c:
    if ((param_2 & 2) != 0) {
      if (param_3 == 1) {
        iVar1 = FUN_004edc10(param_1,lVar4);
      }
      else {
        iVar1 = FUN_004ede60(param_1,lVar4);
      }
      if (iVar1 == 0) goto LAB_00471d91;
    }
    if (((param_2 & 1) == 0) || (iVar1 = FUN_004edfc0(param_1), iVar1 != 0)) {
      bVar5 = true;
      if ((param_2 & 3) == 3) {
        iVar1 = FUN_004ee080(param_1,lVar4);
        bVar5 = iVar1 != 0;
      }
      goto LAB_00471d94;
    }
  }
  else {
    uVar2 = FUN_004ee6c0(param_1);
    if ((uVar2 & 0x2000) == 0) {
      uVar3 = FUN_004ee2d0(param_1);
      iVar1 = FUN_004ec6f0(uVar3,lVar4);
    }
    else {
      uVar3 = FUN_004ee2d0(param_1);
      iVar1 = FUN_004ec600(uVar3,uVar2 >> 0xe & 1,lVar4);
    }
    if (iVar1 != 0) goto LAB_00471d5c;
  }
LAB_00471d91:
  bVar5 = false;
LAB_00471d94:
  FUN_004b2b50(lVar4);
  return bVar5;
}

