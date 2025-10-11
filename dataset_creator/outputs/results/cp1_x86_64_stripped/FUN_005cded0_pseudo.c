
bool FUN_005cded0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  
  lVar8 = 0;
  if ((param_5 == 0) && (lVar8 = FUN_004b2b10(), param_5 = lVar8, lVar8 == 0)) {
    return false;
  }
  FUN_004b2c00(param_5);
  uVar4 = FUN_004b2df0(param_5);
  uVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  lVar7 = FUN_004b2df0(param_5);
  if (lVar7 != 0) {
    plVar1 = param_1 + 9;
    iVar2 = FUN_00618590(uVar5,param_3,plVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_004b7ba0(uVar5);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*param_1 + 0x100))(param_1,uVar4,uVar5,param_5);
        if ((((iVar2 != 0) &&
             (iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,param_1[0xd],uVar4,param_5),
             iVar2 != 0)) && (iVar2 = FUN_006184d0(uVar4,param_1[0xc],uVar4), iVar2 != 0)) &&
           (iVar2 = FUN_006184d0(uVar4,uVar5,uVar4), iVar2 != 0)) {
          FUN_0051f000();
          iVar2 = FUN_00619110(lVar7,uVar4,plVar1,param_5);
          if (iVar2 == 0) {
            uVar9 = FUN_0051e9f0();
            bVar10 = false;
            if ((((uVar9 & 0x80000000) == 0) && ((char)(uVar9 >> 0x17) == '\x03')) &&
               (((uint)uVar9 & 0x7fffff) == 0x74)) {
              FUN_0051f050();
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ec2_oct.c",0x58,
                           "ossl_ec_GF2m_simple_set_compressed_coordinates");
              FUN_0051f8f0(0x10,0x6e,0);
            }
            else {
              FUN_0051f1a0();
              FUN_0051f420();
              FUN_0051f540("../crypto/ec/ec2_oct.c",0x5d,
                           "ossl_ec_GF2m_simple_set_compressed_coordinates");
              FUN_0051f8f0(0x10,0x80003,0);
            }
            goto LAB_005cdf5a;
          }
          FUN_0051f1a0();
          iVar2 = FUN_004b7d40(lVar7);
          iVar3 = (**(code **)(*param_1 + 0xf8))(param_1,uVar6,uVar5,lVar7,param_5);
          if (iVar3 != 0) {
            if ((param_4 != 0) != (iVar2 != 0)) {
              iVar2 = FUN_006184d0(uVar6,uVar6,uVar5);
              goto joined_r0x005ce078;
            }
            goto LAB_005ce0b6;
          }
        }
      }
      else {
        iVar2 = FUN_00619070(uVar6,param_1[0xd],plVar1,param_5);
joined_r0x005ce078:
        if (iVar2 != 0) {
LAB_005ce0b6:
          iVar2 = FUN_004f0f80(param_1,param_2,uVar5,uVar6,param_5);
          bVar10 = iVar2 != 0;
          goto LAB_005cdf5a;
        }
      }
    }
  }
  bVar10 = false;
LAB_005cdf5a:
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar8);
  return bVar10;
}

