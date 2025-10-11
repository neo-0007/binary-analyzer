
bool pk7_cb(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  BIO *pBVar2;
  
  if (param_1 == 0xc) {
LAB_00546e22:
    pBVar2 = PKCS7_dataInit((PKCS7 *)*param_2,(BIO *)*param_4);
    param_4[1] = pBVar2;
    return pBVar2 != (BIO *)0x0;
  }
  if (param_1 < 0xd) {
    if (param_1 == 10) {
      iVar1 = PKCS7_stream((uchar ***)(param_4 + 2),(PKCS7 *)*param_2);
      if (iVar1 < 1) {
        return false;
      }
      goto LAB_00546e22;
    }
    if (param_1 != 0xb) {
      return true;
    }
  }
  else if (param_1 != 0xd) {
    return true;
  }
  iVar1 = PKCS7_dataFinal((PKCS7 *)*param_2,(BIO *)param_4[1]);
  return 0 < iVar1;
}

