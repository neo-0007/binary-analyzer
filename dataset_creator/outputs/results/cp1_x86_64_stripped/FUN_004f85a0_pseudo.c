
undefined8 FUN_004f85a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x78) == 0) ||
     ((lVar4 = 0, param_4 == 0 &&
      (param_4 = FUN_004b2b20(*(undefined8 *)(param_1 + 0xa8)), lVar4 = param_4, param_4 == 0)))) {
    return 0;
  }
  FUN_004b2c00(param_4);
  lVar2 = FUN_004b2df0(param_4);
  if ((((lVar2 != 0) && (iVar1 = FUN_004b8190(lVar2,2), iVar1 != 0)) &&
      (iVar1 = FUN_004b18d0(lVar2,*(undefined8 *)(param_1 + 0x40),lVar2), iVar1 != 0)) &&
     (iVar1 = FUN_004b4eb0(param_2,param_3,lVar2,*(undefined8 *)(param_1 + 0x40),param_4,
                           *(undefined8 *)(param_1 + 0x78)), iVar1 != 0)) {
    uVar3 = 1;
    iVar1 = FUN_004b7ba0(param_2);
    if (iVar1 == 0) goto LAB_004f8601;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ecp_mont.c",0xff,"ossl_ec_GFp_mont_field_inv");
    FUN_0051f8f0(0x10,0xa5,0);
  }
  uVar3 = 0;
LAB_004f8601:
  FUN_004b2d50(param_4);
  FUN_004b2b50(lVar4);
  return uVar3;
}

