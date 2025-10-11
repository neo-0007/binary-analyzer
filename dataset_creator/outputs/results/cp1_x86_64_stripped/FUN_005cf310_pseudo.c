
undefined8 FUN_005cf310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_004b8260(*(undefined8 *)(param_1 + 0x40));
  if (lVar4 != 0) {
    lVar4 = param_1 + 0x48;
    uVar1 = FUN_006194d0(*(undefined8 *)(param_1 + 0x40),lVar4,6);
    if ((uVar1 & 0xfffffffd) == 4) {
      iVar2 = FUN_00618590(*(undefined8 *)(param_1 + 0x60),param_3,lVar4);
      if (iVar2 != 0) {
        iVar3 = *(int *)(param_1 + 0x48) + 0x3f;
        iVar2 = *(int *)(param_1 + 0x48) + 0x7e;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        lVar5 = FUN_004b8240(*(undefined8 *)(param_1 + 0x60),iVar2 >> 6);
        if (lVar5 != 0) {
          FUN_004b73a0(*(undefined8 *)(param_1 + 0x60));
          iVar2 = FUN_00618590(*(undefined8 *)(param_1 + 0x68),param_4,lVar4);
          if (iVar2 != 0) {
            iVar3 = *(int *)(param_1 + 0x48) + 0x3f;
            iVar2 = *(int *)(param_1 + 0x48) + 0x7e;
            if (-1 < iVar3) {
              iVar2 = iVar3;
            }
            lVar4 = FUN_004b8240(*(undefined8 *)(param_1 + 0x68),iVar2 >> 6);
            if (lVar4 != 0) {
              FUN_004b73a0(*(undefined8 *)(param_1 + 0x68));
              return 1;
            }
          }
        }
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec2_smpl.c",0x70,"ossl_ec_GF2m_simple_group_set_curve");
      FUN_0051f8f0(0x10,0x83,0);
    }
  }
  return 0;
}

