
undefined8
encode_pkcs1_constprop_0(undefined8 *param_1,long *param_2,int param_3,void *param_4,size_t param_5)

{
  void *__src;
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_sign.c",0xfa,"encode_pkcs1");
    ERR_set_error(4,0x75,0);
    uVar1 = 0;
  }
  else {
    __src = (void *)ossl_rsa_digestinfo_encoding(param_3,&local_48);
    if (__src == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_sign.c",0xff,"encode_pkcs1");
      ERR_set_error(4,0x74,0);
      uVar1 = 0;
    }
    else {
      lVar2 = local_48 + param_5;
      __dest = CRYPTO_malloc((int)lVar2,"../crypto/rsa/rsa_sign.c",0x104);
      if (__dest == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_sign.c",0x106,"encode_pkcs1");
        ERR_set_error(4,0xc0100,0);
        uVar1 = 0;
      }
      else {
        memcpy(__dest,__src,local_48);
        memcpy((void *)(local_48 + (long)__dest),param_4,param_5);
        *param_1 = __dest;
        uVar1 = 1;
        *param_2 = lVar2;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

