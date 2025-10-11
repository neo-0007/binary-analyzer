
undefined4
FUN_005fe4f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  undefined1 *local_a8;
  undefined4 local_94;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_94 = 0;
  iVar1 = FUN_0040b0e0(param_1,0x200);
  if (iVar1 == 0) {
    uVar4 = 0;
    lVar2 = FUN_00405f40();
    if (lVar2 == 0) {
      FUN_0051f420(0);
      FUN_0051f540("../crypto/evp/p_sign.c",0x24,"EVP_SignFinal_ex");
      FUN_0051f8f0(6,0xc0100,0);
      goto LAB_005fe626;
    }
    iVar1 = FUN_004074f0(lVar2,param_1);
    if (iVar1 == 0) {
      FUN_00406b90();
      uVar4 = 0;
      goto LAB_005fe626;
    }
    iVar1 = FUN_00406090(lVar2,local_88,&local_94);
    FUN_00406b90(lVar2);
    if (iVar1 == 0) {
      uVar4 = 0;
      goto LAB_005fe626;
    }
LAB_005fe56b:
    local_a8 = local_88;
    iVar1 = FUN_0040fb50(param_4);
    local_90 = (long)iVar1;
    lVar2 = FUN_00413530(param_5,param_4,param_6);
    if (lVar2 == 0) goto LAB_005fe650;
    uVar4 = 0;
    iVar1 = FUN_00416ae0(lVar2);
    if (0 < iVar1) {
      uVar3 = FUN_0040b020(param_1);
      iVar1 = FUN_004151b0(lVar2,uVar3);
      if (0 < iVar1) {
        iVar1 = FUN_00416b10(lVar2,param_2,&local_90,local_a8,local_94);
        if (0 < iVar1) {
          uVar4 = 1;
          *param_3 = (int)local_90;
        }
      }
    }
  }
  else {
    iVar1 = FUN_00406090(param_1,local_88,&local_94);
    if (iVar1 != 0) goto LAB_005fe56b;
LAB_005fe650:
    lVar2 = 0;
    uVar4 = 0;
  }
  FUN_00412f00(lVar2);
LAB_005fe626:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

