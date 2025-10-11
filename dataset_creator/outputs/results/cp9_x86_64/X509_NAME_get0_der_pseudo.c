
undefined8 X509_NAME_get0_der(X509_NAME *param_1,undefined8 *param_2,size_t *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = i2d_X509_NAME(param_1,(uchar **)0x0);
  uVar2 = 0;
  if (0 < iVar1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1->bytes->data;
    }
    uVar2 = 1;
    if (param_3 != (size_t *)0x0) {
      *param_3 = param_1->bytes->length;
    }
  }
  return uVar2;
}

