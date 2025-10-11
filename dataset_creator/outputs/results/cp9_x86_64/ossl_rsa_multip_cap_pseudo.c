
char ossl_rsa_multip_cap(int param_1)

{
  char cVar1;
  
  cVar1 = '\x02';
  if ((0x3ff < param_1) && (cVar1 = '\x03', 0xfff < param_1)) {
    return (0x1fff < param_1) + '\x04';
  }
  return cVar1;
}

