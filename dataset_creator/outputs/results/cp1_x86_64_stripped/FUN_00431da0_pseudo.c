
int FUN_00431da0(long param_1,long param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = thunk_FUN_00540f20(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(lVar2 + 0x20) == 0) {
    iVar9 = FUN_0056b0a0(param_5 & 0xffffffff,param_4,param_2,uVar7,*(undefined4 *)(lVar2 + 0x1c));
joined_r0x00431e97:
    if (iVar9 < 0) goto LAB_00431e4d;
    lVar8 = (long)iVar9;
LAB_00431e44:
    *param_3 = lVar8;
    iVar9 = 1;
  }
  else {
    if (*(int *)(lVar2 + 0x1c) == 5) {
      iVar9 = FUN_00431b10(lVar2,param_1);
      if (iVar9 != 0) {
        iVar9 = 0;
        iVar4 = FUN_0056b0a0(param_5 & 0xffffffff,param_4,*(undefined8 *)(lVar2 + 0x38),uVar7,5);
        if (iVar4 < 1) goto LAB_00431e4d;
        lVar8 = (long)(iVar4 + -1);
        bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + lVar8);
        uVar3 = FUN_0040aaf0(*(undefined8 *)(lVar2 + 0x20));
        uVar5 = FUN_00434500(uVar3);
        if (bVar1 != uVar5) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0xe6,"pkey_rsa_verifyrecover");
          FUN_0051f8f0(4,100,0);
          goto LAB_00431e4d;
        }
        iVar6 = FUN_0040ac10(*(undefined8 *)(lVar2 + 0x20));
        if (iVar6 != iVar4 + -1) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0xea,"pkey_rsa_verifyrecover");
          FUN_0051f8f0(4,0x8f,0);
          goto LAB_00431e4d;
        }
        if (param_2 != 0) {
          thunk_FUN_00713a50(param_2,*(undefined8 *)(lVar2 + 0x38),lVar8);
        }
        goto LAB_00431e44;
      }
    }
    else if (*(int *)(lVar2 + 0x1c) == 1) {
      uVar3 = FUN_0040aaf0();
      iVar4 = FUN_00433d30(uVar3,0,0,param_2,local_48,param_4,param_5,uVar7);
      iVar9 = local_48[0];
      if (iVar4 < 1) {
        iVar9 = 0;
        goto LAB_00431e4d;
      }
      goto joined_r0x00431e97;
    }
    iVar9 = -1;
  }
LAB_00431e4d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar9;
}

