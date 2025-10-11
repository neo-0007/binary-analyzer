
ulong conf_value_hash(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = OPENSSL_LH_strhash(*param_1);
  uVar2 = OPENSSL_LH_strhash(param_1[1]);
  return lVar1 * 4 ^ uVar2;
}

