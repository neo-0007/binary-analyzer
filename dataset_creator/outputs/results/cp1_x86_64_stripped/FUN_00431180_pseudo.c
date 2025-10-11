
undefined8 FUN_00431180(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(int **)(param_1 + 0x78) == 0x390) {
    uVar6 = 1;
    lVar5 = thunk_FUN_00540f20(*(undefined8 *)(param_1 + 0x88));
    if (*(long *)(lVar5 + 0x80) == 0) goto LAB_004311b4;
    iVar2 = FUN_00569d50(*(long *)(lVar5 + 0x80),&local_40,&local_38,&local_44);
    if (iVar2 != 0) {
      iVar2 = FUN_0056b040(lVar5);
      iVar3 = FUN_0040ac10(local_40);
      uVar4 = FUN_0056b030(lVar5);
      if (local_44 <= (int)((iVar2 - iVar3) - (uint)((uVar4 & 7) == 1))) {
        *(int *)(lVar1 + 0x34) = local_44;
        *(int *)(lVar1 + 0x30) = local_44;
        *(undefined8 *)(lVar1 + 0x20) = local_40;
        *(undefined8 *)(lVar1 + 0x28) = local_38;
        goto LAB_004311b4;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/rsa/rsa_pmeth.c",0x365,"pkey_pss_init");
      FUN_0051f8f0(4,0x96,0);
    }
  }
  uVar6 = 0;
LAB_004311b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

