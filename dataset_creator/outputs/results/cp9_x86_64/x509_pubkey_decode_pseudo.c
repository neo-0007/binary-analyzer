
undefined8 x509_pubkey_decode(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  ENGINE *e;
  EVP_PKEY *pkey;
  
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)*param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    e = ENGINE_get_pkey_meth_engine(iVar2);
    if (e == (ENGINE *)0x0) {
      return 0;
    }
    ENGINE_finish(e);
  }
  pkey = EVP_PKEY_new();
  if (pkey != (EVP_PKEY *)0x0) {
    iVar2 = EVP_PKEY_set_type(pkey,iVar2);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/x_pubkey.c",0x1a8,"x509_pubkey_decode");
      ERR_set_error(0xb,0x6f,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)&pkey->references + 0x20);
      if (pcVar1 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/x_pubkey.c",0x1b5,"x509_pubkey_decode");
        ERR_set_error(0xb,0x7c,0);
      }
      else {
        iVar2 = (*pcVar1)(pkey,param_2);
        if (iVar2 != 0) {
          *param_1 = pkey;
          return 1;
        }
      }
    }
    EVP_PKEY_free(pkey);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x_pubkey.c",0x1a3,"x509_pubkey_decode");
  ERR_set_error(0xb,0xc0100,0);
  return 0xffffffff;
}

