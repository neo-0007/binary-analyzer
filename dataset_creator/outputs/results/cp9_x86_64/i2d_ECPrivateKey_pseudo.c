
int i2d_ECPrivateKey(EC_KEY *key,uchar **out)

{
  ASN1_STRING *str;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ASN1_BIT_STRING *pAVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  if (((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) ||
     ((((byte)key[0x30] & 2) == 0 && (*(long *)(key + 0x20) == 0)))) {
    puVar3 = (undefined4 *)0x0;
    lVar4 = 0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_asn1.c",0x3fd,"i2d_ECPrivateKey");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    puVar3 = (undefined4 *)EC_PRIVATEKEY_new();
    if (puVar3 == (undefined4 *)0x0) {
      ERR_new();
      lVar4 = 0;
      ERR_set_debug("../crypto/ec/ec_asn1.c",0x402,"i2d_ECPrivateKey");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      *puVar3 = *(undefined4 *)(key + 0x10);
      lVar4 = EC_KEY_priv2buf(key,&local_40);
      if (lVar4 == 0) {
        ERR_new();
        uVar7 = 0x40b;
      }
      else {
        ASN1_STRING_set0(*(ASN1_STRING **)(puVar3 + 2),local_40,(int)lVar4);
        uVar1 = *(uint *)(key + 0x30);
        local_40 = (void *)0x0;
        if ((uVar1 & 1) == 0) {
          lVar6 = EC_GROUP_get_ecpkparameters
                            (*(undefined8 *)(key + 0x18),*(undefined8 *)(puVar3 + 4));
          *(long *)(puVar3 + 4) = lVar6;
          if (lVar6 == 0) {
            ERR_new();
            uVar7 = 0x416;
            goto LAB_004dde11;
          }
          uVar1 = *(uint *)(key + 0x30);
        }
        if ((uVar1 & 2) == 0) {
          pAVar5 = ASN1_BIT_STRING_new();
          *(ASN1_BIT_STRING **)(puVar3 + 6) = pAVar5;
          if (pAVar5 == (ASN1_BIT_STRING *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/ec/ec_asn1.c",0x41e,"i2d_ECPrivateKey");
            ERR_set_error(0x10,0xc0100,0);
            goto LAB_004dddc9;
          }
          lVar6 = EC_KEY_key2buf(key,*(undefined4 *)(key + 0x34),&local_38,0);
          if (lVar6 == 0) {
            ERR_new();
            uVar7 = 0x425;
            goto LAB_004dde11;
          }
          str = *(ASN1_STRING **)(puVar3 + 6);
          str->flags = str->flags & 0xfffffffffffffff0U | 8;
          ASN1_STRING_set0(str,local_38,(int)lVar6);
          local_38 = (void *)0x0;
        }
        iVar2 = i2d_EC_PRIVATEKEY(puVar3,out);
        if (iVar2 != 0) {
          CRYPTO_clear_free(local_40,lVar4,"../crypto/ec/ec_asn1.c",0x435);
          CRYPTO_free(local_38);
          EC_PRIVATEKEY_free(puVar3);
          goto LAB_004ddd6a;
        }
        ERR_new();
        uVar7 = 0x430;
      }
LAB_004dde11:
      ERR_set_debug("../crypto/ec/ec_asn1.c",uVar7,"i2d_ECPrivateKey");
      ERR_set_error(0x10,0x80010,0);
    }
  }
LAB_004dddc9:
  CRYPTO_clear_free(local_40,lVar4,"../crypto/ec/ec_asn1.c",0x435);
  CRYPTO_free(local_38);
  EC_PRIVATEKEY_free(puVar3);
  iVar2 = 0;
LAB_004ddd6a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

