
undefined4 get_payload_public_key(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  EC_KEY *key;
  BN_CTX *c;
  EC_GROUP *pEVar3;
  EC_POINT *pEVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x20) = 0;
  local_48 = (void *)0x0;
  iVar1 = EVP_PKEY_get_base_id(uVar5);
  if (iVar1 == 0x198) {
    if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 5) {
      key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar5);
      uVar5 = ossl_ec_key_get_libctx(key);
      c = (BN_CTX *)BN_CTX_new_ex(uVar5);
      pEVar3 = EC_KEY_get0_group(key);
      pEVar4 = EC_KEY_get0_public_key(key);
      if (c != (BN_CTX *)0x0) {
        uVar5 = EC_POINT_point2buf(pEVar3,pEVar4,2,&local_48,c);
        *(undefined8 *)(param_3 + 0x28) = uVar5;
        *(void **)(param_3 + 0x20) = local_48;
        BN_CTX_free(c);
        goto LAB_00515b9a;
      }
    }
  }
  else {
    if (iVar1 < 0x199) {
      if (iVar1 == 0x1c) {
LAB_00515b57:
        iVar1 = *(int *)(*(long *)(param_3 + 0x30) + 8);
        if (iVar1 == 2) {
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = DH_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
        }
        else {
          uVar2 = 0;
          if (iVar1 != 5) goto LAB_00515b23;
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = ossl_dh_key2buf(uVar5,&local_48,0,1);
          *(undefined8 *)(param_3 + 0x28) = uVar5;
          *(void **)(param_3 + 0x20) = local_48;
        }
LAB_00515b9a:
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        CRYPTO_free(local_48);
        goto LAB_00515b23;
      }
      if (iVar1 == 0x74) {
        if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2) {
          uVar5 = EVP_PKEY_get0_DSA(uVar5);
          uVar5 = DSA_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
          goto LAB_00515b9a;
        }
        goto LAB_00515b21;
      }
    }
    else if (iVar1 == 0x398) goto LAB_00515b57;
    ERR_new();
    ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x662,"get_payload_public_key");
    ERR_set_error(6,0xe0,0);
  }
LAB_00515b21:
  uVar2 = 0;
LAB_00515b23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

