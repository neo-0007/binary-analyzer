
long FUN_005fca20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_004ab640();
  uVar3 = FUN_004ac470(param_1);
  if (param_2 == 0x6f) {
    iVar1 = FUN_00407430(uVar2,param_4,0);
    lVar4 = (long)iVar1;
    if (0 < lVar4) {
      FUN_004ab650(param_1,1);
    }
  }
  else if (param_2 < 0x70) {
    if (param_2 == 0xc) {
      uVar3 = FUN_004ab640(param_4);
      iVar1 = FUN_004074f0(uVar3,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_004ab650(param_1,1);
      lVar4 = 1;
    }
    else {
      if (param_2 != 0x65) {
        if (param_2 == 1) {
          iVar1 = FUN_004ab660(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          uVar5 = FUN_0040b020(uVar2);
          iVar1 = FUN_00407430(uVar2,uVar5,0);
          if ((long)iVar1 < 1) {
            return (long)iVar1;
          }
          param_2 = 1;
        }
LAB_005fcb80:
        lVar4 = FUN_004abd40(uVar3,param_2,param_3,param_4);
        return lVar4;
      }
      FUN_004ab6c0(param_1,0xf);
      lVar4 = FUN_004abd40(uVar3,0x65,param_3,param_4);
      FUN_004ac5f0(param_1);
    }
  }
  else {
    if (param_2 == 0x78) {
      *param_4 = uVar2;
      FUN_004ab650(param_1,1);
      return 1;
    }
    if (param_2 == 0x94) {
      iVar1 = FUN_004ab660(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_004ab630(param_1,param_4);
      lVar4 = 1;
    }
    else {
      if (param_2 != 0x70) goto LAB_005fcb80;
      iVar1 = FUN_004ab660(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_0040b020(uVar2);
      *param_4 = uVar2;
      lVar4 = 1;
    }
  }
  return lVar4;
}

