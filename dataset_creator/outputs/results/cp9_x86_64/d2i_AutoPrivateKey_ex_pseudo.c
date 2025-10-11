
long d2i_AutoPrivateKey_ex
               (long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5
               )

{
  int iVar1;
  long lVar2;
  ASN1_SEQUENCE_ANY *pAVar3;
  PKCS8_PRIV_KEY_INFO *a;
  undefined4 uVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = d2i_PrivateKey_decoder(0,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    local_48 = (uchar *)*param_2;
    pAVar3 = d2i_ASN1_SEQUENCE_ANY((ASN1_SEQUENCE_ANY **)0x0,&local_48,param_3);
    local_48 = (uchar *)*param_2;
    iVar1 = OPENSSL_sk_num(pAVar3);
    if (iVar1 == 6) {
      uVar4 = 0x74;
    }
    else {
      iVar1 = OPENSSL_sk_num(pAVar3);
      uVar4 = 0x198;
      if (iVar1 != 4) {
        iVar1 = OPENSSL_sk_num();
        uVar4 = 6;
        if (iVar1 == 3) {
          a = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_48,param_3);
          OPENSSL_sk_pop_free(pAVar3,ASN1_TYPE_free);
          if (a == (PKCS8_PRIV_KEY_INFO *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/asn1/d2i_pr.c",0xc3,"d2i_AutoPrivateKey_legacy");
            ERR_set_error(0xd,0xa7,0);
          }
          else {
            lVar2 = evp_pkcs82pkey_legacy(a,param_4,param_5);
            PKCS8_PRIV_KEY_INFO_free(a);
            if ((lVar2 != 0) && (*param_2 = local_48, param_1 != (long *)0x0)) {
              *param_1 = lVar2;
            }
          }
          goto LAB_005a77cf;
        }
      }
    }
    OPENSSL_sk_pop_free(pAVar3,ASN1_TYPE_free);
    lVar2 = ossl_d2i_PrivateKey_legacy(uVar4,param_1,param_2,param_3,param_4,param_5);
  }
LAB_005a77cf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

