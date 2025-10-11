
bool FUN_00477800(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_00477950:
    bVar3 = true;
  }
  else {
    lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007ce0ba);
    if (lVar2 == 0) {
LAB_00477851:
      lVar2 = thunk_FUN_0041cdd0(param_2,"size");
      if (lVar2 == 0) {
LAB_00477894:
        lVar2 = thunk_FUN_0041cdd0(param_2,"key");
        if (lVar2 != 0) {
          iVar1 = FUN_00477730(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (iVar1 == 0) goto LAB_00477930;
        }
        lVar2 = thunk_FUN_0041cdd0(param_2,"custom");
        if (lVar2 == 0) goto LAB_00477950;
        if (*(ulong *)(lVar2 + 0x18) < 0x101) {
          iVar1 = FUN_00477590(param_1 + 0x194,param_1 + 0x38,*(undefined8 *)(lVar2 + 0x10));
          bVar3 = iVar1 != 0;
          goto LAB_00477932;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0x1b3,"kmac_set_ctx_params");
        FUN_0051f8f0(0x39,0x6f,0);
      }
      else {
        local_28 = 0;
        iVar1 = thunk_FUN_0041d830(lVar2,&local_28);
        if (iVar1 != 0) {
          if (local_28 < 0x200000) {
            *(ulong *)(param_1 + 0x28) = local_28;
            goto LAB_00477894;
          }
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/macs/kmac_prov.c",0x1a8,"kmac_set_ctx_params");
          FUN_0051f8f0(0x39,0xd9,0);
        }
      }
    }
    else {
      iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 0x40);
      if (iVar1 != 0) goto LAB_00477851;
    }
LAB_00477930:
    bVar3 = false;
  }
LAB_00477932:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

