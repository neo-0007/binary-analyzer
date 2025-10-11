
undefined8 FUN_00475ca0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = thunk_FUN_0041cdd0(param_2,"size");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d830(lVar2,&local_28);
    if ((iVar1 == 0) || (0x1f < local_28 - 1U)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/macs/blake2_mac_impl.c",0xcb,
                   "blake2_mac_set_ctx_params");
      FUN_0051f8f0(0x39,0x71,0);
      uVar3 = 0;
      goto LAB_00475d22;
    }
    FUN_00451410(param_1 + 0x80);
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"key");
  if (lVar2 != 0) {
    uVar3 = FUN_00475b80(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    if ((int)uVar3 == 0) goto LAB_00475d22;
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"custom");
  if (lVar2 != 0) {
    if (8 < *(ulong *)(lVar2 + 0x18)) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/macs/blake2_mac_impl.c",0xdc,
                   "blake2_mac_set_ctx_params");
      FUN_0051f8f0(0x39,0x6f,0);
      uVar3 = 0;
      goto LAB_00475d22;
    }
    FUN_00451430(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10));
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,"salt");
  uVar3 = 1;
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < 9) {
      FUN_00451460(param_1 + 0x80,*(undefined8 *)(lVar2 + 0x10),*(ulong *)(lVar2 + 0x18));
      uVar3 = 1;
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/macs/blake2_mac_impl.c",0xe8,
                   "blake2_mac_set_ctx_params");
      FUN_0051f8f0(0x39,0x70,0);
      uVar3 = 0;
    }
  }
LAB_00475d22:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

