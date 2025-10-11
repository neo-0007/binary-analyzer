
long v2i_EXTENDED_KEY_USAGE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *pAVar3;
  long lVar4;
  int iVar5;
  char *s;
  
  iVar1 = OPENSSL_sk_num(param_3);
  lVar2 = OPENSSL_sk_new_reserve(0,iVar1);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_extku.c",0x52,"v2i_EXTENDED_KEY_USAGE");
    ERR_set_error(0x22,0xc0100,0);
    OPENSSL_sk_free(0);
  }
  else {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(param_3);
        s = *(char **)(lVar4 + 0x10);
        if (s == (char *)0x0) {
          s = *(char **)(lVar4 + 8);
        }
        pAVar3 = OBJ_txt2obj(s,0);
        if (pAVar3 == (ASN1_OBJECT *)0x0) {
          OPENSSL_sk_pop_free(lVar2,ASN1_OBJECT_free);
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_extku.c",0x5f,"v2i_EXTENDED_KEY_USAGE");
          ERR_set_error(0x22,0x6e,&DAT_007d9761,s);
          return 0;
        }
        iVar5 = iVar5 + 1;
        OPENSSL_sk_push(lVar2,pAVar3);
      } while (iVar1 != iVar5);
    }
  }
  return lVar2;
}

