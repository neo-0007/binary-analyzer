
bool ffc_params_to_text(BIO *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)((long)param_2 + 0x34) == 0) {
    iVar1 = print_labeled_bignum(param_1,"P:   ",*param_2);
    if ((((iVar1 != 0) &&
         ((((param_2[1] == 0 || (iVar1 = print_labeled_bignum(param_1,"Q:   "), iVar1 != 0)) &&
           (iVar1 = print_labeled_bignum(param_1,"G:   ",param_2[2]), iVar1 != 0)) &&
          ((param_2[3] == 0 || (iVar1 = print_labeled_bignum(param_1,"J:   "), iVar1 != 0)))))) &&
        ((param_2[4] == 0 ||
         (iVar1 = print_labeled_buf(param_1,"SEED:",param_2[4],param_2[5]), iVar1 != 0)))) &&
       (((*(int *)(param_2 + 7) == -1 || (iVar1 = BIO_printf(param_1,"gindex: %d\n"), 0 < iVar1)) &&
        ((*(int *)(param_2 + 6) == -1 || (iVar1 = BIO_printf(param_1,"pcounter: %d\n"), 0 < iVar1)))
        ))) {
      if (*(int *)((long)param_2 + 0x3c) == 0) {
        return true;
      }
      iVar1 = BIO_printf(param_1,"h: %d\n");
      return 0 < iVar1;
    }
  }
  else {
    uVar2 = ossl_ffc_uid_to_dh_named_group();
    lVar3 = ossl_ffc_named_group_get_name(uVar2);
    if (lVar3 != 0) {
      iVar1 = BIO_printf(param_1,"GROUP: %s\n",lVar3);
      return 0 < iVar1;
    }
  }
  return false;
}

