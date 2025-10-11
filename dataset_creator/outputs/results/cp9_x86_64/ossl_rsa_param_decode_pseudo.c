
undefined8 ossl_rsa_param_decode(long param_1,X509_ALGOR *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RSA_PSS_PARAMS *a;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  ASN1_OBJECT *local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_68,&local_74,&local_60,param_2);
  iVar1 = OBJ_obj2nid(local_68);
  if ((iVar1 == 0x390) && (local_74 != -1)) {
    if (local_74 != 0x10) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_backend.c",0x220,"ossl_rsa_param_decode");
      ERR_set_error(4,0x95,0);
      uVar6 = 0;
      goto LAB_0055500d;
    }
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
    if (a != (RSA_PSS_PARAMS *)0x0) {
      iVar1 = ossl_rsa_set0_pss_params(param_1,a);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          lVar4 = RSA_get0_pss_params(param_1);
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)ossl_rsa_get0_pss_params_30(param_1);
            if (puVar5 != (undefined8 *)0x0) {
              local_58 = 0;
              local_50 = 0;
              iVar1 = ossl_rsa_pss_get_param_unverified
                                (lVar4,&local_58,&local_50,&local_70,&local_6c);
              if (iVar1 != 0) {
                uVar2 = EVP_MD_get_type(local_58);
                uVar3 = EVP_MD_get_type(local_50);
                iVar1 = ossl_rsa_pss_params_30_set_defaults(&local_48);
                if (iVar1 != 0) {
                  iVar1 = ossl_rsa_pss_params_30_set_hashalg(&local_48,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = ossl_rsa_pss_params_30_set_maskgenhashalg(&local_48,uVar3);
                    if (iVar1 != 0) {
                      iVar1 = ossl_rsa_pss_params_30_set_saltlen(&local_48,local_70);
                      if (iVar1 != 0) {
                        iVar1 = ossl_rsa_pss_params_30_set_trailerfield(&local_48,local_6c);
                        if (iVar1 != 0) {
                          *puVar5 = local_48;
                          puVar5[1] = uStack_40;
                          *(undefined4 *)(puVar5 + 2) = local_38;
                          goto LAB_00555008;
                        }
                      }
                    }
                  }
                }
              }
              uVar6 = 0;
              goto LAB_0055500d;
            }
          }
        }
        goto LAB_00555008;
      }
    }
    RSA_PSS_PARAMS_free(a);
    uVar6 = 0;
  }
  else {
LAB_00555008:
    uVar6 = 1;
  }
LAB_0055500d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

