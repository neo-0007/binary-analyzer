
int pkey_dh_paramgen(long param_1,EVP_PKEY *param_2)

{
  int *piVar1;
  int iVar2;
  void *key;
  BN_GENCB *cb;
  DH *pDVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  piVar1 = *(int **)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = piVar1[8];
  if (iVar6 != 0) {
    iVar2 = 0x1c;
    if (iVar6 < 4) {
      iVar2 = 0x398;
    }
    key = (void *)DH_new_by_nid(iVar6);
    if (key != (void *)0x0) {
      iVar6 = 1;
      EVP_PKEY_assign(param_2,iVar2,key);
      goto LAB_004ca21c;
    }
LAB_004ca2c0:
    iVar6 = 0;
    goto LAB_004ca21c;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    iVar6 = piVar1[2];
    cb = (BN_GENCB *)0x0;
    if (iVar6 < 1) goto LAB_004ca271;
LAB_004ca2da:
    iVar2 = *piVar1;
    iVar5 = piVar1[3];
    if ((2 < iVar6) || (pDVar3 = DH_new(), pDVar3 == (DH *)0x0)) goto LAB_004ca398;
    if ((iVar5 == -1) && (iVar5 = 0xa0, 0x7ff < iVar2)) {
      iVar5 = 0x100;
    }
    if (*(long *)(piVar1 + 6) != 0) {
      uVar4 = EVP_MD_get0_name();
      ossl_ffc_set_digest(&pDVar3->p,uVar4,0);
    }
    if (piVar1[2] == 1) {
      iVar6 = ossl_ffc_params_FIPS186_2_generate(0,&pDVar3->p,1,(long)iVar2,(long)iVar5,local_44,cb)
      ;
LAB_004ca368:
      if (0 < iVar6) {
        iVar6 = 1;
        BN_GENCB_free(cb);
        EVP_PKEY_assign(param_2,0x398,pDVar3);
        goto LAB_004ca21c;
      }
    }
    else if (0 < piVar1[2]) {
      iVar6 = ossl_ffc_params_FIPS186_4_generate(0,&pDVar3->p,1,(long)iVar2,(long)iVar5,local_44);
      goto LAB_004ca368;
    }
    DH_free(pDVar3);
  }
  else {
    cb = (BN_GENCB *)BN_GENCB_new();
    if (cb == (BN_GENCB *)0x0) goto LAB_004ca2c0;
    evp_pkey_set_cb_translate(cb,param_1);
    iVar6 = piVar1[2];
    if (0 < iVar6) goto LAB_004ca2da;
LAB_004ca271:
    pDVar3 = DH_new();
    if (pDVar3 != (DH *)0x0) {
      iVar6 = DH_generate_parameters_ex(pDVar3,*piVar1,piVar1[1],cb);
      BN_GENCB_free(cb);
      if (iVar6 == 0) {
        DH_free(pDVar3);
      }
      else {
        EVP_PKEY_assign(param_2,0x1c,pDVar3);
      }
      goto LAB_004ca21c;
    }
  }
LAB_004ca398:
  BN_GENCB_free(cb);
  iVar6 = 0;
LAB_004ca21c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar6;
}

