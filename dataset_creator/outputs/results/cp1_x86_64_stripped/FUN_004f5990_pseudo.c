
int FUN_004f5990(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = thunk_FUN_00541030(*(undefined8 *)(param_1 + 0x88));
  iVar2 = FUN_004eb050(uVar5);
  iVar4 = 0;
  if (iVar2 < 1) goto LAB_004f5a32;
  uVar6 = (ulong)iVar2;
  if (param_2 != 0) {
    if (*param_3 < uVar6) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_pmeth.c",0x82,"pkey_ec_sign");
      FUN_0051f8f0(0x10,100,0);
      iVar4 = 0;
      goto LAB_004f5a32;
    }
    lVar1 = *(long *)(lVar1 + 8);
    uVar3 = 0x40;
    if (lVar1 != 0) {
      uVar3 = FUN_0040aaf0(lVar1);
    }
    iVar4 = FUN_004f7870(uVar3,param_4,param_5,param_2,&local_44,uVar5);
    if (iVar4 < 1) goto LAB_004f5a32;
    uVar6 = (ulong)local_44;
  }
  *param_3 = uVar6;
  iVar4 = 1;
LAB_004f5a32:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

