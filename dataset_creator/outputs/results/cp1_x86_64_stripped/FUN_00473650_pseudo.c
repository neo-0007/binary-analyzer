
undefined8 FUN_00473650(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = thunk_FUN_0041cdd0(param_2,"encoded-pub-key");
  if (lVar2 == 0) {
LAB_004736f8:
    lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
    if (lVar2 != 0) {
      uVar3 = 0;
      if (*(int *)(lVar2 + 8) != 4) goto LAB_0047369c;
      lVar2 = *(long *)(lVar2 + 0x10);
      FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/keymgmt/ecx_kmgmt.c",
                   0x17c);
      *(undefined8 *)(param_1 + 8) = 0;
      if (lVar2 != 0) {
        lVar2 = FUN_0041c2c0(lVar2,"../providers/implementations/keymgmt/ecx_kmgmt.c",0x17f);
        *(long *)(param_1 + 8) = lVar2;
        if (lVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../providers/implementations/keymgmt/ecx_kmgmt.c",0x181,"set_property_query"
                      );
          FUN_0051f8f0(0x39,0xc0100,0);
          goto LAB_0047369c;
        }
      }
    }
    uVar3 = 1;
  }
  else {
    local_38 = param_1 + 0x11;
    if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x58)) {
      iVar1 = FUN_0041e150(lVar2,&local_38,0x39,0);
      if (iVar1 != 0) {
        FUN_0041aef0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                     "../providers/implementations/keymgmt/ecx_kmgmt.c",0x198);
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
        *(undefined8 *)(param_1 + 0x50) = 0;
        goto LAB_004736f8;
      }
    }
    uVar3 = 0;
  }
LAB_0047369c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

