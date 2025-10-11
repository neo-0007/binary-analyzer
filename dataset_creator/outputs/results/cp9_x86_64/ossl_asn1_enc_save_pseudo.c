
undefined8 ossl_asn1_enc_save(long *param_1,void *param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  
  if (param_1 != (long *)0x0) {
    if (((*param_1 != 0) && (lVar2 = *(long *)(param_4 + 0x20), lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 8) & 2) != 0)) {
      uVar3 = 0;
      puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
      CRYPTO_free((void *)*puVar1);
      if (0 < param_3) {
        __dest = CRYPTO_malloc(param_3,"../crypto/asn1/tasn_utl.c",0xab);
        *puVar1 = __dest;
        if (__dest == (void *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_utl.c",0xac,"ossl_asn1_enc_save");
          ERR_set_error(0xd,0xc0100,0);
        }
        else {
          uVar3 = 1;
          memcpy(__dest,param_2,(long)param_3);
          puVar1[1] = (long)param_3;
          *(undefined4 *)(puVar1 + 2) = 0;
        }
      }
      return uVar3;
    }
  }
  return 1;
}

