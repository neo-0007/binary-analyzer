
undefined8
ossl_rsa_pss_get_param_unverified
          (undefined8 *param_1,long *param_2,long *param_3,undefined4 *param_4,undefined4 *param_5)

{
  ASN1_INTEGER *a;
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_rsa_pss_params_30_set_defaults(auStack_58);
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = ossl_x509_algor_get_md(*param_1);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      lVar2 = ossl_x509_algor_get_md(param_1[4]);
      *param_3 = lVar2;
      if (lVar2 != 0) {
        if ((ASN1_INTEGER *)param_1[2] == (ASN1_INTEGER *)0x0) {
          uVar1 = ossl_rsa_pss_params_30_saltlen(auStack_58);
          a = (ASN1_INTEGER *)param_1[3];
          *param_4 = uVar1;
        }
        else {
          lVar2 = ASN1_INTEGER_get((ASN1_INTEGER *)param_1[2]);
          a = (ASN1_INTEGER *)param_1[3];
          *param_4 = (int)lVar2;
        }
        if (a == (ASN1_INTEGER *)0x0) {
          uVar1 = ossl_rsa_pss_params_30_trailerfield(auStack_58);
          *param_5 = uVar1;
          uVar3 = 1;
        }
        else {
          lVar2 = ASN1_INTEGER_get(a);
          *param_5 = (int)lVar2;
          uVar3 = 1;
        }
        goto LAB_00554e22;
      }
    }
  }
  uVar3 = 0;
LAB_00554e22:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

