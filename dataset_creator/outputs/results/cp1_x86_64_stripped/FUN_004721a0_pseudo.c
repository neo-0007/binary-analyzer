
bool FUN_004721a0(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar2 = FUN_004ee2a0(param_1);
  lVar3 = FUN_004b2a70(uVar2);
  if (lVar3 == 0) {
    return false;
  }
  if ((param_2 & 4) == 0) {
LAB_00472204:
    if ((param_2 & 2) != 0) {
      if (param_3 == 1) {
        iVar1 = FUN_004edc10(param_1,lVar3);
      }
      else {
        iVar1 = FUN_004ede60(param_1,lVar3);
      }
      if (iVar1 == 0) goto LAB_00472239;
    }
    if (((param_2 & 1) == 0) || (iVar1 = FUN_005901d0(param_1), iVar1 != 0)) {
      bVar4 = true;
      if ((param_2 & 3) == 3) {
        iVar1 = FUN_004ee080(param_1,lVar3);
        bVar4 = iVar1 != 0;
      }
      goto LAB_0047223c;
    }
  }
  else {
    uVar2 = FUN_004ee2d0(param_1);
    iVar1 = FUN_004ec6f0(uVar2,lVar3);
    if (iVar1 != 0) goto LAB_00472204;
  }
LAB_00472239:
  bVar4 = false;
LAB_0047223c:
  FUN_004b2b50(lVar3);
  return bVar4;
}

