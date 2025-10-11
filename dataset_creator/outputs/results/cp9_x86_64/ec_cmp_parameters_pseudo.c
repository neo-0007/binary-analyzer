
ulong ec_cmp_parameters(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *a;
  EC_GROUP *b;
  ulong uVar2;
  
  a = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  b = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  if ((a == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = EC_GROUP_cmp(a,b,(BN_CTX *)0x0);
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}

