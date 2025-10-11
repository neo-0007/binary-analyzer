
undefined4 X509_get_extension_flags(X509 *param_1)

{
  X509_check_purpose(param_1,-1,0);
  return *(undefined4 *)&param_1[1].name;
}

