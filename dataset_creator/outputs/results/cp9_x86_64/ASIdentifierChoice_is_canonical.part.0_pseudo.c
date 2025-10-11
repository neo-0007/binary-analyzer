
bool ASIdentifierChoice_is_canonical_part_0(long param_1)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  ASN1_INTEGER *x;
  int *piVar4;
  int *piVar5;
  BIGNUM *bn;
  undefined8 uVar6;
  ASN1_INTEGER *x_00;
  bool bVar7;
  ASN1_INTEGER *y;
  ASN1_INTEGER *y_00;
  ASN1_INTEGER *ai;
  ASN1_INTEGER *local_40;
  
  bn = (BIGNUM *)0x0;
  ai = (ASN1_INTEGER *)0x0;
  iVar2 = 0;
  do {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 + -1 <= iVar2) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
      bVar7 = true;
      piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar2 + -1);
      if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
        iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)**(undefined8 **)(piVar4 + 2),
                                 (ASN1_INTEGER *)(*(undefined8 **)(piVar4 + 2))[1]);
        bVar7 = iVar2 < 1;
      }
      goto LAB_006073cb;
    }
    piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar2);
    piVar5 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar2 + 1);
    x = ai;
    if (piVar4 == (int *)0x0) break;
    if (*piVar4 == 0) {
      x_00 = *(ASN1_INTEGER **)(piVar4 + 2);
      y_00 = x_00;
    }
    else {
      if (*piVar4 != 1) break;
      x_00 = (ASN1_INTEGER *)**(undefined8 **)(piVar4 + 2);
      y_00 = (ASN1_INTEGER *)(*(undefined8 **)(piVar4 + 2))[1];
    }
    if (piVar5 == (int *)0x0) break;
    if (*piVar5 == 0) {
      y = *(ASN1_INTEGER **)(piVar5 + 2);
      local_40 = y;
    }
    else {
      if (*piVar5 != 1) break;
      y = (ASN1_INTEGER *)**(undefined8 **)(piVar5 + 2);
      local_40 = (ASN1_INTEGER *)(*(undefined8 **)(piVar5 + 2))[1];
    }
    iVar1 = ASN1_INTEGER_cmp(x_00,y);
    if (-1 < iVar1) break;
    iVar1 = ASN1_INTEGER_cmp(x_00,y_00);
    if (0 < iVar1) break;
    iVar1 = ASN1_INTEGER_cmp(y,local_40);
    if (0 < iVar1) break;
    if (bn == (BIGNUM *)0x0) {
      bn = BN_new();
      if (bn != (BIGNUM *)0x0) goto LAB_0060732d;
LAB_00607418:
      ERR_new();
      uVar6 = 0x130;
LAB_00607429:
      bVar7 = false;
      ERR_set_debug("../crypto/x509/v3_asid.c",uVar6,"ASIdentifierChoice_is_canonical");
      ERR_set_error(0x22,0xc0100,0);
      goto LAB_006073cb;
    }
LAB_0060732d:
    pBVar3 = ASN1_INTEGER_to_BN(y_00,bn);
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_00607418;
    iVar1 = BN_add_word(bn,1);
    if (iVar1 == 0) goto LAB_00607418;
    x = BN_to_ASN1_INTEGER(bn,ai);
    if (x == (ASN1_INTEGER *)0x0) {
      ERR_new();
      uVar6 = 0x137;
      goto LAB_00607429;
    }
    iVar1 = ASN1_INTEGER_cmp(x,y);
    ai = x;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0);
  bVar7 = false;
  ai = x;
LAB_006073cb:
  ASN1_INTEGER_free(ai);
  BN_free(bn);
  return bVar7;
}

