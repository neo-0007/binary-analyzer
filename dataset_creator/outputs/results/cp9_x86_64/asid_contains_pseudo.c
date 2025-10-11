
undefined8 asid_contains(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ASN1_INTEGER *x;
  int iVar4;
  ASN1_INTEGER *x_00;
  ASN1_INTEGER *y;
  ASN1_INTEGER *local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 != param_1) {
    iVar4 = 0;
    iVar3 = 0;
    if (param_1 == 0) {
      return 0;
    }
    for (; iVar1 = OPENSSL_sk_num(param_2), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      piVar2 = (int *)OPENSSL_sk_value(param_2,iVar4);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if (*piVar2 == 0) {
        y = *(ASN1_INTEGER **)(piVar2 + 2);
        local_40 = y;
      }
      else {
        if (*piVar2 != 1) {
          return 0;
        }
        y = (ASN1_INTEGER *)(*(undefined8 **)(piVar2 + 2))[1];
        local_40 = (ASN1_INTEGER *)**(undefined8 **)(piVar2 + 2);
      }
      while( true ) {
        iVar1 = OPENSSL_sk_num(param_1);
        if (iVar1 <= iVar3) {
          return 0;
        }
        piVar2 = (int *)OPENSSL_sk_value(param_1,iVar3);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        if (*piVar2 == 0) {
          x = *(ASN1_INTEGER **)(piVar2 + 2);
          x_00 = x;
        }
        else {
          if (*piVar2 != 1) {
            return 0;
          }
          x = (ASN1_INTEGER *)(*(undefined8 **)(piVar2 + 2))[1];
          x_00 = (ASN1_INTEGER *)**(undefined8 **)(piVar2 + 2);
        }
        iVar1 = ASN1_INTEGER_cmp(x,y);
        if (-1 < iVar1) break;
        iVar3 = iVar3 + 1;
      }
      iVar1 = ASN1_INTEGER_cmp(x_00,local_40);
      if (0 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}

