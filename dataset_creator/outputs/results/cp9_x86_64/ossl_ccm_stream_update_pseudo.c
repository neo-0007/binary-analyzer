
undefined4 ossl_ccm_stream_update(void)

{
  int iVar1;
  ulong in_RCX;
  ulong in_R9;
  
  if (in_RCX < in_R9) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x111,
                  "ossl_ccm_stream_update");
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  iVar1 = ccm_cipher_internal();
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon_ccm.c",0x116,
                "ossl_ccm_stream_update");
  ERR_set_error(0x39,0x66,0);
  return 0;
}

