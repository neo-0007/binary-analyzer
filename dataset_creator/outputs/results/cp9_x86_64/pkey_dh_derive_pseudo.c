
int pkey_dh_derive(long param_1,uchar *param_2,long *param_3)

{
  long lVar1;
  BIGNUM *pub_key;
  int iVar2;
  DH *dh;
  long lVar3;
  uchar *key;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x90) == 0)) {
    ERR_new();
    uVar4 = 0x198;
  }
  else {
    dh = (DH *)EVP_PKEY_get0_DH();
    lVar3 = EVP_PKEY_get0_DH(*(undefined8 *)(param_1 + 0x90));
    if (lVar3 != 0) {
      pub_key = *(BIGNUM **)(lVar3 + 0x70);
      if (*(char *)(lVar1 + 0x2c) != '\x01') {
        if (((*(char *)(lVar1 + 0x2c) == '\x02') && (lVar3 = *(long *)(lVar1 + 0x50), lVar3 != 0))
           && (*(long *)(lVar1 + 0x30) != 0)) {
          if (param_2 == (uchar *)0x0) {
            *param_3 = lVar3;
            return 1;
          }
          if (lVar3 == *param_3) {
            iVar2 = DH_size(dh);
            lVar3 = (long)iVar2;
            if (lVar3 != 0) {
              key = (uchar *)CRYPTO_malloc(iVar2,"../crypto/dh/dh_pmeth.c",0x1bf);
              if (key != (uchar *)0x0) {
                iVar2 = DH_compute_key_padded(key,pub_key,dh);
                if ((iVar2 < 1) ||
                   (iVar2 = DH_KDF_X9_42(param_2,*param_3,key,lVar3,*(undefined8 *)(lVar1 + 0x30),
                                         *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48)
                                         ,*(undefined8 *)(lVar1 + 0x38)), iVar2 == 0)) {
                  iVar2 = 0;
                }
                else {
                  *param_3 = *(long *)(lVar1 + 0x50);
                  iVar2 = 1;
                }
                CRYPTO_clear_free(key,lVar3,"../crypto/dh/dh_pmeth.c",0x1cb);
                return iVar2;
              }
              ERR_new();
              ERR_set_debug("../crypto/dh/dh_pmeth.c",0x1c0,"pkey_dh_derive");
              ERR_set_error(5,0xc0100,0);
            }
          }
        }
        return 0;
      }
      if (param_2 == (uchar *)0x0) {
        iVar2 = DH_size(dh);
        *param_3 = (long)iVar2;
        return 1;
      }
      if (*(int *)(lVar1 + 0x10) == 0) {
        iVar2 = DH_compute_key(param_2,pub_key,dh);
      }
      else {
        iVar2 = DH_compute_key_padded(param_2,pub_key,dh);
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      *param_3 = (long)iVar2;
      return 1;
    }
    ERR_new();
    uVar4 = 0x19e;
  }
  ERR_set_debug("../crypto/dh/dh_pmeth.c",uVar4,"pkey_dh_derive");
  ERR_set_error(5,0x6c,0);
  return 0;
}

