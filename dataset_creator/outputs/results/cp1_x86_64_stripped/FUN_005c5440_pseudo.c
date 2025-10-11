
bool FUN_005c5440(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,long param_7,int param_8,undefined8 param_9,undefined8 param_10,
                 undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  bool bVar7;
  long local_68;
  long local_58;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return false;
  }
  FUN_004b2c00(param_10);
  lVar5 = param_3;
  if (param_3 == 0) {
    lVar5 = FUN_004b2df0(param_10);
  }
  local_68 = param_4;
  if (param_4 == 0) {
    local_68 = FUN_004b2df0(param_10);
  }
  lVar4 = param_6;
  if (param_6 == 0) {
    lVar4 = FUN_004b2df0(param_10);
  }
  local_58 = param_7;
  if (param_7 == 0) {
    local_58 = FUN_004b2df0(param_10);
  }
  if ((((lVar5 != 0) && (local_68 != 0)) && (lVar4 != 0)) && (local_58 != 0)) {
    if (param_8 < 0x1000) {
      if (param_8 < 0xc00) {
        uVar6 = 0x8d;
        if (param_8 < 0x800) goto LAB_005c5500;
      }
      else {
        uVar6 = 0xab;
      }
    }
    else {
      uVar6 = 0xc9;
    }
    if ((((param_6 != 0) || (iVar1 = FUN_004bb500(lVar4,uVar6,0,1,0,param_10), iVar1 != 0)) &&
        ((param_7 != 0 || (iVar1 = FUN_004bb500(local_58,uVar6,0,1,0,param_10), iVar1 != 0)))) &&
       ((iVar1 = FUN_005c4fa0(lVar4,lVar5,param_10,param_11), iVar1 != 0 &&
        (iVar1 = FUN_005c4fa0(local_58,local_68,param_10,param_11), iVar1 != 0)))) {
      iVar1 = FUN_004b7bb0(lVar5);
      iVar2 = FUN_004b7bb0(local_68);
      iVar3 = 0x7ee;
      if ((param_8 < 0x1000) && (iVar3 = 0x5ee, param_8 < 0xc00)) {
        iVar3 = 0x3ef;
      }
      if (iVar1 + iVar2 < iVar3) {
        iVar1 = FUN_005c5040(param_1,param_2,param_5,lVar5,local_68,param_8,param_9,param_10,
                             param_11);
        bVar7 = iVar1 != 0;
        goto LAB_005c5503;
      }
    }
  }
LAB_005c5500:
  bVar7 = false;
LAB_005c5503:
  if (param_3 == 0) {
    FUN_004b7780(lVar5);
  }
  if (param_4 == 0) {
    FUN_004b7780(local_68);
  }
  if (param_6 == 0) {
    FUN_004b7780(lVar4);
  }
  if (param_7 == 0) {
    FUN_004b7780(local_58);
  }
  FUN_004b2d50(param_10);
  return bVar7;
}

