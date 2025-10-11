
ulong ed25519_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = ecx_get_params(param_1,param_2,0x100,0x80,0x40);
  if ((int)uVar2 != 0) {
    lVar3 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    uVar2 = 1;
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_set_utf8_string(lVar3,&DAT_008343a2);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}

