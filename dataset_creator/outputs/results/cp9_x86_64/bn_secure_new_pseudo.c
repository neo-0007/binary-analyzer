
bool bn_secure_new(long *param_1)

{
  long lVar1;
  
  lVar1 = BN_secure_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}

