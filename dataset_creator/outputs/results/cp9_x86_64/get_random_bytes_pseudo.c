
bool get_random_bytes(undefined8 param_1,int param_2)

{
  long lVar1;
  
  if (-1 < param_2) {
    lVar1 = OPENSSL_ia32_rdrand_bytes(param_1,(long)param_2);
    return param_2 == lVar1;
  }
  return false;
}

