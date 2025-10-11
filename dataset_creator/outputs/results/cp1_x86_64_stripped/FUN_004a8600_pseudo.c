
ulong * FUN_004a8600(long param_1,ulong *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 0x300) == 0) goto LAB_004a86a6;
  lVar2 = (*(code *)param_2[4])();
  if (*(long *)(param_1 + *(long *)(lVar2 + 8)) == 0) {
    param_2 = *(ulong **)(lVar2 + 0x30);
joined_r0x004a86e8:
    if (param_2 != (ulong *)0x0) goto LAB_004a86a6;
    if (param_3 == 0) {
      param_2 = (ulong *)0x0;
      goto LAB_004a86a6;
    }
    FUN_0051f420();
    uVar5 = 0x11c;
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      local_38 = FUN_0049fa00();
    }
    else {
      iVar1 = FUN_00423da0();
      local_38 = (long)iVar1;
    }
    if ((*(code **)(lVar2 + 0x10) == (code *)0x0) ||
       (iVar1 = (**(code **)(lVar2 + 0x10))(&local_38), iVar1 != 0)) {
      plVar3 = *(long **)(lVar2 + 0x18);
      if (0 < *(long *)(lVar2 + 0x20)) {
        lVar4 = 0;
        do {
          if (*plVar3 == local_38) {
            param_2 = (ulong *)(plVar3 + 1);
            goto LAB_004a86a6;
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 6;
        } while (lVar4 != *(long *)(lVar2 + 0x20));
      }
      param_2 = *(ulong **)(lVar2 + 0x28);
      goto joined_r0x004a86e8;
    }
    FUN_0051f420();
    uVar5 = 0x103;
  }
  FUN_0051f540("../crypto/asn1/tasn_utl.c",uVar5,"ossl_asn1_do_adb");
  FUN_0051f8f0(0xd,0xa4,0);
  param_2 = (ulong *)0x0;
LAB_004a86a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

