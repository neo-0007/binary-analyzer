
undefined4 rsa_sig_info_set(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  RSA_PSS_PARAMS *a;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  uVar5 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  if (iVar1 == 0x390) {
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
    iVar1 = ossl_rsa_pss_get_param(a,&local_28,&local_30,&local_34);
    if (iVar1 == 0) {
      RSA_PSS_PARAMS_free(a);
      uVar5 = 0;
    }
    else {
      iVar1 = EVP_MD_get_type(local_28);
      if (iVar1 - 0x2a0U < 3) {
        iVar3 = EVP_MD_get_type(local_30);
        cVar4 = '\0';
        if (iVar3 == iVar1) {
          iVar3 = EVP_MD_get_size(local_28);
          cVar4 = (local_34 == iVar3) * '\x02';
        }
        iVar3 = EVP_MD_get_size(local_28);
        iVar3 = iVar3 * 4;
      }
      else {
        iVar2 = EVP_MD_get_size(local_28);
        if (iVar1 == 0x40) {
          iVar3 = 0x40;
          cVar4 = '\0';
        }
        else {
          cVar4 = '\0';
          iVar3 = 0x44;
          if (iVar1 != 0x72) {
            if (iVar1 == 4) {
              iVar3 = 0x27;
            }
            else {
              iVar3 = iVar2 * 4;
            }
          }
        }
      }
      uVar5 = 1;
      X509_SIG_INFO_set(param_1,iVar1,0x390,iVar3,cVar4);
      RSA_PSS_PARAMS_free(a);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

