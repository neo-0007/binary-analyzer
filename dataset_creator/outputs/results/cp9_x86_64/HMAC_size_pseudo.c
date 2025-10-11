
long HMAC_size(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = EVP_MD_get_size(*param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (long)iVar1;
}

