
undefined4
FUN_004f94a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  if ((param_5 == 0) && (lVar6 = FUN_004b2b10(), param_5 = lVar6, lVar6 == 0)) {
    return 0;
  }
  FUN_004b2c00(param_5);
  uVar3 = FUN_004b2df0(param_5);
  uVar4 = FUN_004b2df0(param_5);
  lVar5 = FUN_004b2df0(param_5);
  uVar2 = 0;
  if (lVar5 != 0) {
    FUN_004b84d0(&DAT_007ff9e0,0x1c,uVar3);
    FUN_004b84d0(&DAT_007ff9fc,0x1c,uVar4);
    FUN_004b84d0(&DAT_007ffa18,0x1c,lVar5);
    iVar1 = FUN_004b7840(uVar3,param_2);
    if (((iVar1 == 0) && (iVar1 = FUN_004b7840(uVar4,param_3), iVar1 == 0)) &&
       (iVar1 = FUN_004b7840(lVar5,param_4), iVar1 == 0)) {
      *(code **)(param_1 + 0x88) = FUN_005c3230;
      uVar2 = FUN_0050d3d0(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_nistp224.c",0x528,"ossl_ec_GFp_nistp224_group_set_curve");
      FUN_0051f8f0(0x10,0x91,0);
      uVar2 = 0;
    }
  }
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar6);
  return uVar2;
}

