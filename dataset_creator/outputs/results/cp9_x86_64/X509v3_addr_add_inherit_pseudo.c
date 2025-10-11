
undefined8 X509v3_addr_add_inherit(void)

{
  long lVar1;
  long lVar2;
  ASN1_NULL *pAVar3;
  int *piVar4;
  
  lVar2 = make_IPAddressFamily();
  if ((lVar2 != 0) && (piVar4 = *(int **)(lVar2 + 8), piVar4 != (int *)0x0)) {
    lVar1 = *(long *)(piVar4 + 2);
    if (*piVar4 == 1) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else if (*piVar4 == 0) {
      if (lVar1 != 0) {
        return 1;
      }
    }
    else if (lVar1 != 0) goto LAB_006056c5;
    pAVar3 = ASN1_NULL_new();
    *(ASN1_NULL **)(piVar4 + 2) = pAVar3;
    if (pAVar3 != (ASN1_NULL *)0x0) {
      piVar4 = *(int **)(lVar2 + 8);
LAB_006056c5:
      *piVar4 = 0;
      return 1;
    }
  }
  return 0;
}

