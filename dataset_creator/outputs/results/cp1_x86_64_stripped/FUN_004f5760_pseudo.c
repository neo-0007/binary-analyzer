
ulong FUN_004f5760(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = FUN_004f5620();
      return uVar5;
    }
    goto LAB_004f590d;
  }
  if (param_2 == 0) {
    *param_3 = *(long *)(lVar1 + 0x38);
    uVar5 = 1;
  }
  else {
    if (*param_3 == *(long *)(lVar1 + 0x38)) {
      iVar2 = FUN_004f5620(param_1,0,&local_48);
      if (iVar2 != 0) {
        lVar4 = FUN_0041ad90(local_48,"../crypto/ec/ec_pmeth.c",0xe8);
        if (lVar4 != 0) {
          uVar3 = FUN_004f5620(param_1,lVar4,&local_48);
          if (uVar3 != 0) {
            iVar2 = FUN_004f5db0(param_2,*param_3,lVar4,local_48,*(undefined8 *)(lVar1 + 0x28),
                                 *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20),
                                 *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
            uVar3 = (uint)(iVar2 != 0);
          }
          FUN_0041aef0(lVar4,local_48,"../crypto/ec/ec_pmeth.c",0xf6);
          uVar5 = (ulong)uVar3;
          goto LAB_004f57b0;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_pmeth.c",0xe9,"pkey_ec_kdf_derive");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
    }
    uVar5 = 0;
  }
LAB_004f57b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_004f590d:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

