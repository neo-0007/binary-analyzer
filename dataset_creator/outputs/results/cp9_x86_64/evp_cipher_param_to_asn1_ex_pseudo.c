
int evp_cipher_param_to_asn1_ex(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2,undefined8 param_3)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  ulong uVar3;
  uchar *ptr;
  ASN1_TYPE *pAVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uchar *local_e8;
  long lStack_e0;
  long local_d8;
  ASN1_TYPE *local_c0 [2];
  uchar *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uchar *local_98;
  long lStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uchar *local_70;
  long lStack_68;
  long local_60;
  long local_30;
  
  pEVar1 = param_1->cipher;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0[0] = param_2;
  if (pEVar1->get_asn1_parameters != (_func_1093 *)0x0) {
    iVar2 = (*pEVar1->get_asn1_parameters)(param_1,param_2);
    goto LAB_0040eff0;
  }
  uVar3 = EVP_CIPHER_get_flags(pEVar1);
  if ((uVar3 & 0x1000000) == 0) {
    iVar2 = EVP_CIPHER_get_mode(pEVar1);
    if (iVar2 != 0x10001) {
      if (iVar2 < 0x10002) {
        if (iVar2 == 6) {
          iVar2 = evp_cipher_set_asn1_aead_params(param_1,local_c0[0],param_3);
LAB_0040eff0:
          if (iVar2 != -2) {
            iVar5 = -1;
            if (-1 < iVar2) {
              iVar5 = iVar2;
            }
            if (0 < iVar2) goto LAB_0040f007;
            goto LAB_0040f0a7;
          }
        }
        else if (iVar2 != 7) goto LAB_0040f1b9;
      }
      else {
        if (iVar2 == 0x10002) {
          iVar5 = 1;
          iVar2 = EVP_CIPHER_is_a(pEVar1,"id-smime-alg-CMS3DESwrap");
          if (iVar2 != 0) {
            ASN1_TYPE_set(local_c0[0],5,(void *)0x0);
          }
          goto LAB_0040f007;
        }
        if (iVar2 != 0x10003) {
LAB_0040f1b9:
          iVar2 = EVP_CIPHER_set_asn1_iv(param_1,local_c0[0]);
          goto LAB_0040eff0;
        }
      }
    }
  }
  else if (pEVar1[1].do_cipher != (_func_1090 *)0x0) {
    OSSL_PARAM_construct_octet_string(&local_f8,"alg_id_param",0,0);
    local_88 = local_d8;
    local_a8 = local_f8;
    uStack_a0 = uStack_f0;
    local_98 = local_e8;
    lStack_90 = lStack_e0;
    OSSL_PARAM_construct_end(&local_f8);
    local_80 = local_f8;
    uStack_78 = uStack_f0;
    local_60 = local_d8;
    local_70 = local_e8;
    lStack_68 = lStack_e0;
    iVar2 = EVP_CIPHER_CTX_get_params(param_1,&local_a8);
    if ((((iVar2 != 0) && (iVar2 = OSSL_PARAM_modified(&local_a8), iVar2 != 0)) && (local_88 != 0))
       && (ptr = (uchar *)CRYPTO_malloc((int)local_88,"../crypto/evp/evp_lib.c",0x90),
          ptr != (uchar *)0x0)) {
      lStack_90 = local_88;
      local_98 = ptr;
      OSSL_PARAM_set_all_unmodified(&local_a8);
      local_b0 = ptr;
      iVar2 = EVP_CIPHER_CTX_get_params(param_1,&local_a8);
      if (((iVar2 != 0) && (iVar2 = OSSL_PARAM_modified(&local_a8), iVar2 != 0)) &&
         (pAVar4 = d2i_ASN1_TYPE(local_c0,&local_b0,local_88), pAVar4 != (ASN1_TYPE *)0x0)) {
        CRYPTO_free(ptr);
        iVar5 = 1;
        goto LAB_0040f007;
      }
      CRYPTO_free(ptr);
    }
    iVar5 = -1;
LAB_0040f0a7:
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_lib.c",0xa5,"evp_cipher_param_to_asn1_ex");
    ERR_set_error(6,0x7a,0);
    goto LAB_0040f007;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_lib.c",0xa3,"evp_cipher_param_to_asn1_ex");
  iVar5 = -1;
  ERR_set_error(6,0x6b,0);
LAB_0040f007:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar5;
}

