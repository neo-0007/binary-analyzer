
int FUN_004f83d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = 0;
  FUN_004b9810(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_5 == 0) {
    lVar5 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xa8));
    if (lVar5 == 0) {
      return 0;
    }
    lVar2 = FUN_004b9790();
    param_5 = lVar5;
  }
  else {
    lVar2 = FUN_004b9790();
  }
  if (lVar2 == 0) {
    lVar3 = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004b9860(lVar2,param_2,param_5);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_mont.c",0xa6,"ossl_ec_GFp_mont_group_set_curve");
      FUN_0051f8f0(0x10,0x80003,0);
      lVar3 = 0;
      iVar1 = 0;
    }
    else {
      lVar3 = FUN_004b7690();
      iVar1 = 0;
      if (lVar3 != 0) {
        uVar4 = FUN_004b75a0();
        iVar1 = FUN_004b7d70(lVar3,uVar4,lVar2,param_5);
        if (iVar1 != 0) {
          *(long *)(param_1 + 0x78) = lVar2;
          *(long *)(param_1 + 0x80) = lVar3;
          lVar2 = 0;
          iVar1 = FUN_0050d3d0(param_1,param_2,param_3,param_4,param_5);
          lVar3 = 0;
          if (iVar1 == 0) {
            FUN_004b9810(*(undefined8 *)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            FUN_004b7fa0(*(undefined8 *)(param_1 + 0x80));
            lVar3 = 0;
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  FUN_004b7fa0(lVar3);
  FUN_004b2b50(lVar5);
  FUN_004b9810(lVar2);
  return iVar1;
}

