
undefined8 ossl_err_load_PKCS7_strings(void)

{
  char *pcVar1;
  
  pcVar1 = ERR_reason_error_string(0x10800075);
  if (pcVar1 != (char *)0x0) {
    return 1;
  }
  ERR_load_strings_const(PKCS7_str_reasons);
  return 1;
}

