
undefined4
FUN_005d0680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = 0;
  if ((param_5 == 0) &&
     (param_5 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8)), lVar5 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_5);
  uVar3 = FUN_005c3ab0();
  iVar1 = FUN_004b77f0(uVar3,param_2);
  if (iVar1 == 0) {
    pcVar4 = (code *)&LAB_005c2f10;
  }
  else {
    uVar3 = FUN_005c3ac0();
    iVar1 = FUN_004b77f0(uVar3,param_2);
    if (iVar1 == 0) {
      pcVar4 = FUN_005c3230;
    }
    else {
      uVar3 = FUN_005c3ad0();
      iVar1 = FUN_004b77f0(uVar3,param_2);
      if (iVar1 == 0) {
        pcVar4 = (code *)&LAB_005c3690;
      }
      else {
        uVar3 = FUN_005c3ae0();
        iVar1 = FUN_004b77f0(uVar3,param_2);
        if (iVar1 == 0) {
          pcVar4 = FUN_005c27e0;
        }
        else {
          uVar3 = FUN_005c3af0();
          iVar1 = FUN_004b77f0(uVar3,param_2);
          if (iVar1 != 0) {
            FUN_0051f420();
            uVar2 = 0;
            FUN_0051f540("../crypto/ec/ecp_nist.c",0x74,"ossl_ec_GFp_nist_group_set_curve");
            FUN_0051f8f0(0x10,0x87,0);
            goto LAB_005d06ee;
          }
          pcVar4 = FUN_005c2c70;
        }
      }
    }
  }
  *(code **)(param_1 + 0x88) = pcVar4;
  uVar2 = FUN_0050d3d0(param_1,param_2,param_3,param_4,param_5);
LAB_005d06ee:
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar5);
  return uVar2;
}

