
undefined8 ossl_ecx_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007da6af);
    if (param_3 == 0) {
      if (lVar2 != 0) {
LAB_00504466:
        local_38 = param_1 + 0x11;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,0x39,&local_40);
        if ((iVar1 != 0) && (*(long *)(param_1 + 0x58) == local_40)) {
LAB_0050448c:
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
          uVar3 = 1;
          goto LAB_005044c2;
        }
      }
    }
    else {
      lVar4 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
      if (lVar2 != 0 || lVar4 != 0) {
        if (lVar4 == 0) {
LAB_0050450b:
          local_38 = param_1 + 0x11;
          if (lVar2 != 0) goto LAB_00504466;
          iVar1 = ossl_ecx_public_from_private(param_1);
          if (iVar1 != 0) goto LAB_0050448c;
        }
        else {
          iVar1 = OSSL_PARAM_get_octet_string
                            (lVar4,param_1 + 0x50,*(undefined8 *)(param_1 + 0x58),&local_48);
          if (iVar1 != 0) {
            if (*(long *)(param_1 + 0x58) == local_48) goto LAB_0050450b;
            CRYPTO_secure_clear_free
                      (*(undefined8 *)(param_1 + 0x50),local_48,"../crypto/ec/ecx_backend.c",0x54);
            *(undefined8 *)(param_1 + 0x50) = 0;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_005044c2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

