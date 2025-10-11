
long p8info_to_encp8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_440;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_440 = 0;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_2);
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    iVar1 = ossl_pw_get_passphrase(local_438,0x400,&local_440,0,1,param_2 + 3);
    if (iVar1 == 0) {
      ERR_new();
      lVar3 = 0;
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x74,
                    "p8info_to_encp8");
      ERR_set_error(0x39,0x9f,0);
    }
    else {
      lVar3 = PKCS8_encrypt_ex(0xffffffff,param_2[2],local_438,local_440 & 0xffffffff,0,0,0,param_1,
                               uVar2,0);
      OPENSSL_cleanse(local_438,local_440);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

