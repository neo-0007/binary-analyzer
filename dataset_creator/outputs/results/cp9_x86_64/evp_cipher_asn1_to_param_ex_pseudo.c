
int evp_cipher_asn1_to_param_ex
              (EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2,undefined8 param_3,void *param_4)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uchar *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_30;
  
  pEVar1 = param_1->cipher;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pEVar1->ctrl != (_func_1094 *)0x0) {
    iVar2 = (*pEVar1->ctrl)(param_1,(int)param_2,(int)param_3,param_4);
    goto LAB_0040f31e;
  }
  uVar3 = EVP_CIPHER_get_flags(pEVar1);
  if ((uVar3 & 0x1000000) == 0) {
    iVar2 = EVP_CIPHER_get_mode(pEVar1);
    if (iVar2 != 0x10001) {
      if (iVar2 < 0x10002) {
        if (iVar2 == 6) {
          iVar2 = evp_cipher_get_asn1_aead_params(param_1,param_2,param_3);
LAB_0040f31e:
          if (iVar2 != -2) {
            iVar4 = -1;
            if (-1 < iVar2) {
              iVar4 = iVar2;
            }
            if (0 < iVar2) goto LAB_0040f335;
            goto LAB_0040f3d7;
          }
        }
        else if (iVar2 != 7) goto LAB_0040f489;
      }
      else {
        iVar4 = 1;
        if (iVar2 == 0x10002) goto LAB_0040f335;
        if (iVar2 != 0x10003) {
LAB_0040f489:
          iVar2 = EVP_CIPHER_get_asn1_iv(param_1,param_2);
          goto LAB_0040f31e;
        }
      }
    }
  }
  else if (pEVar1[1].do_cipher != (_func_1090 *)0x0) {
    local_b0 = (uchar *)0x0;
    iVar2 = i2d_ASN1_TYPE(param_2,&local_b0);
    if (iVar2 < 0) {
      iVar4 = -1;
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_e8,"alg_id_param",local_b0,(long)iVar2);
      local_88 = local_c8;
      local_a8 = local_e8;
      uStack_a0 = uStack_e0;
      local_98 = local_d8;
      uStack_90 = uStack_d0;
      OSSL_PARAM_construct_end(&local_e8);
      local_80 = local_e8;
      uStack_78 = uStack_e0;
      local_60 = local_c8;
      local_70 = local_d8;
      uStack_68 = uStack_d0;
      iVar2 = EVP_CIPHER_CTX_set_params(param_1,&local_a8);
      if (iVar2 != 0) {
        iVar4 = 1;
        CRYPTO_free(local_b0);
        goto LAB_0040f335;
      }
      iVar4 = -1;
      CRYPTO_free(local_b0);
    }
LAB_0040f3d7:
    ERR_new();
    ERR_set_debug("../crypto/evp/evp_lib.c",0xec,"evp_cipher_asn1_to_param_ex");
    ERR_set_error(6,0x7a,0);
    goto LAB_0040f335;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_lib.c",0xea,"evp_cipher_asn1_to_param_ex");
  iVar4 = -1;
  ERR_set_error(6,0x6b,0);
LAB_0040f335:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar4;
}

