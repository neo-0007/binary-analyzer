
uint ASIdentifierChoice_canonize(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ASIdOrRange *a;
  BIGNUM *pBVar5;
  ASN1_INTEGER *pAVar6;
  BIGNUM *bn;
  undefined8 *puVar7;
  undefined8 uVar8;
  ASN1_INTEGER *y;
  ASN1_INTEGER *local_58;
  ASN1_INTEGER *local_50;
  int local_48;
  ASN1_INTEGER *local_40;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_asid.c",0x177,"ASIdentifierChoice_canonize");
    ERR_set_error(0x22,0x74,0);
    return 0;
  }
  bn = (BIGNUM *)0x0;
  OPENSSL_sk_sort(*(undefined8 *)(param_1 + 2));
  local_48 = 0;
  local_50 = (ASN1_INTEGER *)0x0;
  iVar1 = local_48;
  while( true ) {
    local_48 = iVar1;
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    if (iVar1 + -1 <= local_48) break;
    piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),local_48);
    iVar1 = local_48 + 1;
    a = (ASIdOrRange *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1);
    if (piVar4 == (int *)0x0) {
LAB_00607860:
      uVar3 = 0;
      goto LAB_00607863;
    }
    if (*piVar4 == 0) {
      pAVar6 = *(ASN1_INTEGER **)(piVar4 + 2);
      local_58 = pAVar6;
    }
    else {
      if (*piVar4 != 1) goto LAB_00607860;
      pAVar6 = (ASN1_INTEGER *)(*(undefined8 **)(piVar4 + 2))[1];
      local_58 = (ASN1_INTEGER *)**(undefined8 **)(piVar4 + 2);
    }
    if (a == (ASIdOrRange *)0x0) goto LAB_00607860;
    if (a->type == 0) {
      y = (a->u).id;
      local_40 = y;
    }
    else {
      if (a->type != 1) goto LAB_00607860;
      y = ((a->u).range)->min;
      local_40 = (ASN1_INTEGER *)((a->u).range)->max;
    }
    iVar2 = ASN1_INTEGER_cmp(local_58,y);
    if (((0 < iVar2) || (iVar2 = ASN1_INTEGER_cmp(local_58,pAVar6), 0 < iVar2)) ||
       (iVar2 = ASN1_INTEGER_cmp(y,local_40), 0 < iVar2)) goto LAB_00607860;
    iVar2 = ASN1_INTEGER_cmp(pAVar6,y);
    if (-1 < iVar2) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/x509/v3_asid.c",0x19f,"ASIdentifierChoice_canonize");
      ERR_set_error(0x22,0x74,0);
      goto LAB_00607863;
    }
    if (((bn == (BIGNUM *)0x0) && (bn = BN_new(), bn == (BIGNUM *)0x0)) ||
       ((pBVar5 = ASN1_INTEGER_to_BN(pAVar6,bn), pBVar5 == (BIGNUM *)0x0 ||
        (iVar2 = BN_add_word(bn,1), iVar2 == 0)))) {
      ERR_new();
      uVar8 = 0x1a9;
LAB_006078e9:
      uVar3 = 0;
      ERR_set_debug("../crypto/x509/v3_asid.c",uVar8,"ASIdentifierChoice_canonize");
      ERR_set_error(0x22,0xc0100,0);
      goto LAB_00607863;
    }
    pAVar6 = BN_to_ASN1_INTEGER(bn,local_50);
    if (pAVar6 == (ASN1_INTEGER *)0x0) {
      ERR_new();
      uVar8 = 0x1b0;
      goto LAB_006078e9;
    }
    iVar2 = ASN1_INTEGER_cmp(pAVar6,y);
    local_50 = pAVar6;
    if (iVar2 == 0) {
      if (*piVar4 == 0) {
        puVar7 = (undefined8 *)CRYPTO_malloc(0x10,"../crypto/x509/v3_asid.c",0x1bb);
        if (puVar7 == (undefined8 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_asid.c",0x1bc,"ASIdentifierChoice_canonize");
          ERR_set_error(0x22,0xc0100,0);
          uVar3 = 0;
          goto LAB_00607863;
        }
        *puVar7 = local_58;
        puVar7[1] = local_40;
        *piVar4 = 1;
        *(undefined8 **)(piVar4 + 2) = puVar7;
      }
      else if (*piVar4 == 1) {
        ASN1_INTEGER_free(*(ASN1_STRING **)(*(long *)(piVar4 + 2) + 8));
        *(ASN1_INTEGER **)(*(long *)(piVar4 + 2) + 8) = local_40;
      }
      if (a->type == 0) {
        (a->u).id = (ASN1_INTEGER *)0x0;
      }
      else if (a->type == 1) {
        ((a->u).id)->data = (uchar *)0x0;
      }
      ASIdOrRange_free(a);
      OPENSSL_sk_delete(*(undefined8 *)(param_1 + 2),iVar1);
      iVar1 = local_48;
    }
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
  piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
    uVar3 = 0;
    iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)**(undefined8 **)(piVar4 + 2),
                             (ASN1_INTEGER *)(*(undefined8 **)(piVar4 + 2))[1]);
    if (0 < iVar1) goto LAB_00607863;
  }
  uVar3 = 1;
  if (((*param_1 != 0) && (uVar3 = 0, *param_1 == 1)) &&
     (uVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), uVar3 != 0)) {
    iVar1 = ASIdentifierChoice_is_canonical_part_0(param_1);
    uVar3 = (uint)(iVar1 != 0);
  }
LAB_00607863:
  ASN1_INTEGER_free(local_50);
  BN_free(bn);
  return uVar3;
}

