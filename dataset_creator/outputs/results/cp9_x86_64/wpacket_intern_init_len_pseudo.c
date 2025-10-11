
undefined4 wpacket_intern_init_len(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar2 = CRYPTO_zalloc(0x28,"../crypto/packet.c",0x6b);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/packet.c",0x6c,"wpacket_intern_init_len");
    ERR_set_error(0xf,0xc0100,0);
  }
  else {
    uVar3 = 1;
    if (param_2 != 0) {
      *(long *)(lVar2 + 0x18) = param_2;
      *(long *)(lVar2 + 0x10) = param_2;
      iVar1 = WPACKET_allocate_bytes(param_1,param_2,auStack_38);
      if (iVar1 == 0) {
        CRYPTO_free(*(void **)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

