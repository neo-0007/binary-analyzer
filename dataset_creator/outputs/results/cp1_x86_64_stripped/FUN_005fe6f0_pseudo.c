
int FUN_005fe6f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  undefined4 local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  iVar1 = FUN_0040b0e0(param_1,0x200);
  if (iVar1 == 0) {
    iVar1 = 0;
    lVar3 = FUN_00405f40();
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/p_verify.c",0x22,"EVP_VerifyFinal_ex");
      FUN_0051f8f0(6,0xc0100,0);
      goto LAB_005fe7d0;
    }
    iVar1 = FUN_004074f0(lVar3,param_1);
    if (iVar1 == 0) {
      FUN_00406b90(lVar3);
      iVar1 = 0;
      goto LAB_005fe7d0;
    }
    iVar1 = FUN_00406090(lVar3,local_88,&local_8c);
    FUN_00406b90(lVar3);
    if (iVar1 == 0) {
      iVar1 = 0;
      goto LAB_005fe7d0;
    }
LAB_005fe768:
    local_a0 = local_88;
    iVar1 = -1;
    lVar3 = FUN_00413530(param_5,param_4,param_6);
    if (lVar3 != 0) {
      iVar2 = FUN_00416cf0(lVar3);
      if (0 < iVar2) {
        uVar4 = FUN_0040b020(param_1);
        iVar2 = FUN_004151b0(lVar3,uVar4);
        if (0 < iVar2) {
          iVar1 = FUN_00416d20(lVar3,param_2,param_3,local_a0,local_8c);
        }
      }
    }
  }
  else {
    lVar3 = 0;
    iVar1 = FUN_00406090(param_1,local_88,&local_8c);
    if (iVar1 != 0) goto LAB_005fe768;
  }
  FUN_00412f00(lVar3);
LAB_005fe7d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

