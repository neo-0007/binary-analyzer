
void SCT_LIST_print(undefined8 param_1,BIO *param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while( true ) {
        uVar3 = OPENSSL_sk_value(param_1,iVar4);
        SCT_print(uVar3,param_2,param_3,param_5);
        iVar2 = OPENSSL_sk_num(param_1);
        if (iVar2 + -1 <= iVar4) break;
        iVar4 = iVar4 + 1;
        BIO_printf(param_2,"%s",param_4);
        if (iVar1 == iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

