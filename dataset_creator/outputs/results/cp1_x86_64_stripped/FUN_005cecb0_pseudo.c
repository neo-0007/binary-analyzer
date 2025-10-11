
uint FUN_005cecb0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (param_2 == 0) {
    param_2 = FUN_004b2b10();
    lVar4 = param_2;
    if (param_2 == 0) {
      FUN_0051f420();
      uVar1 = 0;
      FUN_0051f540("../crypto/ec/ec2_smpl.c",0xbf,"ossl_ec_GF2m_simple_group_check_discriminant");
      FUN_0051f8f0(0x10,0xc0100,0);
      goto LAB_005cecfc;
    }
  }
  uVar1 = 0;
  FUN_004b2c00(param_2);
  lVar3 = FUN_004b2df0(param_2);
  if (lVar3 != 0) {
    uVar1 = FUN_00618590(lVar3,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48);
    if (uVar1 != 0) {
      iVar2 = FUN_004b7ba0(lVar3);
      uVar1 = (uint)(iVar2 == 0);
    }
  }
LAB_005cecfc:
  FUN_004b2d50(param_2);
  FUN_004b2b50(lVar4);
  return uVar1;
}

