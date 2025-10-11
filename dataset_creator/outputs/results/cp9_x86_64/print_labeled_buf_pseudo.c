
bool print_labeled_buf(BIO *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  iVar1 = BIO_printf(param_1,"%s\n",param_2);
  if (iVar1 < 1) {
    return false;
  }
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      if ((ulong)(lVar3 * -0x1111111111111111) < 0x1111111111111112) {
        if ((lVar3 != 0) && (iVar1 = BIO_printf(param_1,"\n"), iVar1 < 1)) {
          return false;
        }
        iVar1 = BIO_printf(param_1,"    ");
        if (iVar1 < 1) {
          return false;
        }
      }
      pcVar2 = "";
      if (param_4 + -1 != lVar3) {
        pcVar2 = ":";
      }
      iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_3 + lVar3),pcVar2);
      if (iVar1 < 1) {
        return false;
      }
      lVar3 = lVar3 + 1;
    } while (param_4 != lVar3);
  }
  iVar1 = BIO_printf(param_1,"\n");
  return 0 < iVar1;
}

