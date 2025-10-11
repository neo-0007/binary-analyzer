
int EVP_PKEY_generate(EVP_PKEY *param_1,long *param_2)

{
  int iVar1;
  ENGINE *pEVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  EVP_PKEY *pkey;
  EVP_PKEY *pEVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char *local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
    iVar4 = -1;
    goto LAB_00410951;
  }
  pkey = param_1;
  if (param_1 == (EVP_PKEY *)0x0) {
LAB_004109eb:
    ERR_new();
    ERR_set_debug("../crypto/evp/pmeth_gn.c",0xf4,"EVP_PKEY_generate");
    iVar4 = -2;
    ERR_set_error(6,0x96,0);
LAB_0041093c:
    if (pkey != (EVP_PKEY *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if ((param_1->type & 6) != 0) {
      pkey = (EVP_PKEY *)0x0;
      pEVar6 = (EVP_PKEY *)*param_2;
      if ((EVP_PKEY *)*param_2 == (EVP_PKEY *)0x0) {
        pkey = EVP_PKEY_new();
        *param_2 = (long)pkey;
        pEVar6 = pkey;
        if (pkey == (EVP_PKEY *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/pmeth_gn.c",0x94,"EVP_PKEY_generate");
          iVar4 = -1;
          ERR_set_error(6,0xc0100,0);
          goto LAB_00410951;
        }
      }
      lVar5 = *(long *)&param_1->save_parameters;
      pEVar2 = param_1[2].engine;
      if (lVar5 == 0) {
        if ((pEVar2 == (ENGINE *)0x0) || (*(long *)(pEVar2 + 0x60) == 0)) {
          if (param_1->type == 2) {
            iVar4 = (**(code **)(*(long *)&param_1[2].references + 0x28))(param_1);
          }
          else {
            if (param_1->type != 4) goto LAB_004109eb;
            iVar4 = (**(code **)(*(long *)&param_1[2].references + 0x38))(param_1);
          }
          if (0 < iVar4) goto LAB_00410951;
        }
        else {
          ERR_new(pEVar2,pEVar6);
          iVar4 = -1;
          ERR_set_debug("../crypto/evp/pmeth_gn.c",0xfd,"EVP_PKEY_generate");
          ERR_set_error(6,0xcc,0);
        }
      }
      else {
        param_1[2].type = 2;
        pcVar7 = (param_1->pkey).ptr;
        param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)(local_40 + 1);
        if (pEVar2 == (ENGINE *)0x0) {
LAB_00410980:
          lVar5 = evp_keymgmt_util_gen(*param_2,pcVar7,lVar5,ossl_callback_to_pkey_gencb,param_1);
          if (lVar5 != 0) {
            param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)0x0;
            iVar4 = 1;
            evp_pkey_free_legacy(*param_2);
            *(int *)*param_2 = param_1[2].save_type;
            goto LAB_00410951;
          }
        }
        else {
          local_40[0] = pcVar7;
          evp_pkey_export_to_provider
                    (pEVar2,*(undefined8 *)&param_1->references,local_40,param_1->ameth);
          if (local_40[0] == (char *)0x0) goto LAB_004109eb;
          iVar4 = evp_keymgmt_gen_set_template
                            ((param_1->pkey).ptr,*(undefined8 *)&param_1->save_parameters);
          if (iVar4 != 0) {
            lVar5 = *(long *)&param_1->save_parameters;
            pcVar7 = (param_1->pkey).ptr;
            goto LAB_00410980;
          }
        }
        iVar1 = param_1[2].save_type;
        piVar3 = (int *)*param_2;
        param_1[1].attributes = (stack_st_X509_ATTRIBUTE *)0x0;
        iVar4 = 0;
        *piVar3 = iVar1;
      }
      goto LAB_0041093c;
    }
    ERR_new();
    pkey = (EVP_PKEY *)0x0;
    iVar4 = -1;
    ERR_set_debug("../crypto/evp/pmeth_gn.c",0xf8,"EVP_PKEY_generate");
    ERR_set_error(6,0x97,0);
  }
  EVP_PKEY_free(pkey);
LAB_00410951:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar4;
}

