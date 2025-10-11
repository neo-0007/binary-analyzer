
undefined8 X509_check_ip(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = do_x509_check();
    return uVar1;
  }
  return 0xfffffffe;
}

