
bool FUN_004b1f60(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  if ((*param_1 == 0) || (lVar3 = param_1[1], lVar3 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bn/bn_blind.c",0x62,"BN_BLINDING_update");
    FUN_0051f8f0(3,0x6b,0);
    bVar4 = false;
  }
  else {
    uVar1 = param_1[6];
    if ((int)param_1[5] == -1) {
      *(undefined4 *)(param_1 + 5) = 1;
LAB_004b1fe7:
      if ((uVar1 & 1) != 0) {
        return true;
      }
    }
    else {
      iVar2 = (int)param_1[5] + 1;
      *(int *)(param_1 + 5) = iVar2;
      if (iVar2 != 0x20) goto LAB_004b1fe7;
      if ((param_1[2] != 0) && ((uVar1 & 2) == 0)) {
        lVar3 = FUN_004b1d00(param_1,0,0,param_2,0,0);
        bVar4 = lVar3 != 0;
        goto LAB_004b2032;
      }
      bVar4 = true;
      if ((uVar1 & 1) != 0) goto LAB_004b2038;
    }
    if (param_1[7] == 0) {
      iVar2 = FUN_004b8fe0(lVar3,lVar3,lVar3,param_1[3],param_2);
      if (iVar2 == 0) goto LAB_004b1fd8;
      lVar3 = *param_1;
      iVar2 = FUN_004b8fe0(lVar3,lVar3,lVar3,param_1[3],param_2);
      bVar4 = iVar2 != 0;
    }
    else {
      iVar2 = FUN_004b9520(lVar3,lVar3,lVar3,param_1[7],param_2);
      if (iVar2 == 0) {
LAB_004b1fd8:
        bVar4 = false;
      }
      else {
        lVar3 = *param_1;
        iVar2 = FUN_004b9520(lVar3,lVar3,lVar3,param_1[7],param_2);
        bVar4 = iVar2 != 0;
      }
    }
  }
LAB_004b2032:
  if ((int)param_1[5] != 0x20) {
    return bVar4;
  }
LAB_004b2038:
  *(undefined4 *)(param_1 + 5) = 0;
  return bVar4;
}

