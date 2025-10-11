
bool ASN1_buf_print(BIO *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if ((ulong)(lVar3 * -0x1111111111111111) < 0x1111111111111112) {
        if ((lVar3 != 0) && (iVar1 = BIO_puts(param_1,"\n"), iVar1 < 1)) {
          return false;
        }
        iVar1 = BIO_indent(param_1,param_4,0x80);
        if (iVar1 == 0) {
          return false;
        }
      }
      pcVar2 = ":";
      if (param_3 + -1 == lVar3) {
        pcVar2 = "";
      }
      iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2 + lVar3),pcVar2);
      if (iVar1 < 1) {
        return false;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != lVar3);
  }
  iVar1 = BIO_write(param_1,&DAT_0081a1ca,1);
  return 0 < iVar1;
}

