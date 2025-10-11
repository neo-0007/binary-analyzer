
ulong FUN_005ceff0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 *param_5,
                  long *param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (1 < param_4) {
LAB_005cf034:
    uVar2 = FUN_004f3350(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  iVar1 = FUN_004b7ba0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) goto LAB_005cf034;
  iVar1 = FUN_004b7ba0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 != 0) goto LAB_005cf034;
  if (param_3 != 0) {
    if ((param_4 & 1) == 0) {
      uVar4 = 0;
      goto LAB_005cf108;
    }
    if (param_3 != 0) goto LAB_005cf088;
  }
  if ((param_4 & 1) == 0) {
LAB_005cf088:
    lVar3 = FUN_004efb90(param_1);
    uVar5 = 0;
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec2_smpl.c",0x38c,"ec_GF2m_simple_points_mul");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      iVar1 = FUN_004f2a10(param_1,lVar3,param_3,0,param_7);
      if (iVar1 != 0) {
        iVar1 = FUN_004f2a10(param_1,param_2,*param_6,*param_5,param_7);
        if (iVar1 != 0) {
          iVar1 = FUN_004f0a30(param_1,param_2,lVar3,param_2,param_7);
          uVar5 = (uint)(iVar1 != 0);
        }
      }
      FUN_004efcc0(lVar3);
    }
    return (ulong)uVar5;
  }
  uVar4 = *param_5;
  param_3 = *param_6;
LAB_005cf108:
  uVar2 = FUN_004f2a10(param_1,param_2,param_3,uVar4,param_7);
  return uVar2;
}

