
bool ossl_gcm_stream_update
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
               undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    *param_3 = 0;
    return true;
  }
  if (param_6 <= param_4) {
    iVar1 = gcm_cipher_internal();
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x138,
                    "ossl_gcm_stream_update");
      ERR_set_error(0x39,0x66,0);
    }
    return iVar1 >= 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon_gcm.c",0x133,
                "ossl_gcm_stream_update");
  ERR_set_error(0x39,0x6a,0);
  return false;
}

