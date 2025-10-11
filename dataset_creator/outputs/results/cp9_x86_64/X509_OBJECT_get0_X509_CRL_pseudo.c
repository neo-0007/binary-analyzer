
undefined8 X509_OBJECT_get0_X509_CRL(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 == 2)) {
    return *(undefined8 *)(param_1 + 2);
  }
  return 0;
}

