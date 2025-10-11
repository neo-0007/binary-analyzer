
void ossl_asn1_primitive_free(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar2;
  int iVar3;
  ASN1_OBJECT *a;
  
  if (param_2 == (char *)0x0) {
    piVar2 = (int *)*param_1;
    a = *(ASN1_OBJECT **)(piVar2 + 2);
    param_1 = (long *)(piVar2 + 2);
    if (a == (ASN1_OBJECT *)0x0) {
      return;
    }
    iVar3 = *piVar2;
    if (iVar3 == 5) goto LAB_004a3c40;
    if (iVar3 < 6) {
      if (iVar3 == -4) {
LAB_004a3c1d:
        ossl_asn1_primitive_free(param_1,0,0);
        CRYPTO_free((void *)*param_1);
        goto LAB_004a3c40;
      }
      if (iVar3 == 1) {
        piVar2[2] = -1;
        return;
      }
    }
    else {
LAB_004a3c80:
      if (iVar3 == 6) {
        ASN1_OBJECT_free(a);
        goto LAB_004a3c40;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    if (param_3 == 0) {
      if (lVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x18);
        goto joined_r0x004a3bec;
      }
    }
    else if (lVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x20);
joined_r0x004a3bec:
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a3bdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    if (*param_2 == '\x05') {
      a = (ASN1_OBJECT *)*param_1;
      if (a == (ASN1_OBJECT *)0x0) {
        return;
      }
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_2 + 8);
      if (iVar3 == 1) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return;
      }
      a = (ASN1_OBJECT *)*param_1;
      if (a == (ASN1_OBJECT *)0x0) {
        return;
      }
      if (iVar3 == 5) goto LAB_004a3c40;
      if (5 < iVar3) goto LAB_004a3c80;
      if (iVar3 == -4) goto LAB_004a3c1d;
    }
  }
  ossl_asn1_string_embed_free(a,param_3);
LAB_004a3c40:
  *param_1 = 0;
  return;
}

