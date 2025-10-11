
undefined8 dpn_cb(int param_1,long *param_2)

{
  if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  else if (param_1 == 3) {
    X509_NAME_free(*(X509_NAME **)(*param_2 + 0x10));
    return 1;
  }
  return 1;
}

