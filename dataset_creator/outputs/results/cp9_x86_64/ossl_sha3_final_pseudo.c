
undefined8 ossl_sha3_final(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0xd0) == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_2 + 200);
  lVar3 = *(long *)(param_2 + 0xd8);
  memset((void *)(param_2 + 0xe0 + lVar3),0,lVar2 - lVar3);
  *(undefined1 *)(param_2 + 0xe0 + lVar3) = *(undefined1 *)(param_2 + 0x188);
  pbVar1 = (byte *)(param_2 + 0xdf + lVar2);
  *pbVar1 = *pbVar1 | 0x80;
  SHA3_absorb(param_2,param_2 + 0xe0,lVar2,lVar2);
  SHA3_squeeze(param_2,param_1,*(undefined8 *)(param_2 + 0xd0),lVar2);
  return 1;
}

