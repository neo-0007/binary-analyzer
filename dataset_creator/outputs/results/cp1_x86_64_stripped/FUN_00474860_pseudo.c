
bool FUN_00474860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = FUN_0042c5c0();
  iVar1 = FUN_0042c5e0(param_1,0xf000);
  lVar5 = FUN_0042c500(param_1);
  lVar6 = FUN_0041cdd0(param_2,"bits");
  if (lVar6 == 0) {
    lVar6 = FUN_0041cdd0(param_2,"security-bits");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_004748f4;
    }
    lVar6 = FUN_0041cdd0(param_2,"max-size");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_00474925;
    }
  }
  else {
    if (lVar5 == 0) {
      return false;
    }
    uVar2 = FUN_0056b030(param_1);
    iVar3 = thunk_FUN_0041d0b0(lVar6,uVar2);
    if (iVar3 == 0) {
      return false;
    }
    lVar6 = FUN_0041cdd0(param_2,"security-bits");
    if (lVar6 == 0) {
      lVar6 = FUN_0041cdd0(param_2,"max-size");
    }
    else {
LAB_004748f4:
      uVar2 = FUN_0042bf20(param_1);
      iVar3 = thunk_FUN_0041d0b0(lVar6,uVar2);
      if (iVar3 == 0) {
        return false;
      }
      lVar6 = FUN_0041cdd0(param_2,"max-size");
    }
    if (lVar6 != 0) {
LAB_00474925:
      uVar2 = FUN_0056b040(param_1);
      iVar3 = thunk_FUN_0041d0b0(lVar6,uVar2);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  lVar5 = FUN_0041cdd0(param_2,"default-digest");
  if (lVar5 == 0) {
LAB_00474976:
    lVar5 = FUN_0041cdd0(param_2,"mandatory-digest");
    if (lVar5 == 0) {
      if (iVar1 != 0x1000) goto LAB_0047499e;
    }
    else {
      if (iVar1 != 0x1000) goto LAB_0047499e;
LAB_00474a57:
      iVar1 = FUN_00433230(uVar4);
      if (iVar1 == 0) {
        uVar2 = FUN_00433340(uVar4);
        lVar6 = FUN_00433790(uVar2);
        if (lVar6 == 0) {
          return false;
        }
        iVar1 = FUN_0041e1a0(lVar5,lVar6);
        if (iVar1 == 0) {
          return false;
        }
      }
    }
  }
  else {
    if ((iVar1 != 0x1000) || (iVar3 = FUN_00433230(uVar4), iVar3 != 0)) {
      iVar3 = FUN_0041e1a0(lVar5,"SHA256");
      if (iVar3 == 0) {
        return false;
      }
      goto LAB_00474976;
    }
    lVar5 = FUN_0041cdd0(param_2,"mandatory-digest");
    if (lVar5 != 0) goto LAB_00474a57;
  }
  iVar1 = FUN_0042a8e0(uVar4,0,param_2);
  if (iVar1 == 0) {
    return false;
  }
LAB_0047499e:
  iVar1 = FUN_0042a6f0(param_1,0,param_2,1);
  return iVar1 != 0;
}

