
bool drbg_hmac_generate(long param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *__src;
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *__dest;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  __src = puVar1 + 0xd;
  uVar2 = *puVar1;
  if (((param_4 == 0) || (param_5 == 0)) ||
     (iVar3 = drbg_hmac_update_isra_0(puVar1,param_4,param_5,0,0,0,0), iVar3 != 0)) {
    lVar4 = puVar1[4];
    puVar5 = __src;
    while( true ) {
      __dest = param_2;
      iVar3 = EVP_MAC_init(uVar2,puVar1 + 5,lVar4,0);
      if (iVar3 == 0) {
        return false;
      }
      iVar3 = EVP_MAC_update(uVar2,puVar5,puVar1[4]);
      if (iVar3 == 0) {
        return false;
      }
      if (param_3 <= (ulong)puVar1[4]) break;
      iVar3 = EVP_MAC_final(uVar2,__dest,0);
      if (iVar3 == 0) {
        return false;
      }
      lVar4 = puVar1[4];
      param_3 = param_3 - lVar4;
      param_2 = (undefined8 *)((long)__dest + lVar4);
      puVar5 = __dest;
    }
    iVar3 = EVP_MAC_final(uVar2,__src,0,0x40);
    if (iVar3 != 0) {
      memcpy(__dest,__src,param_3);
      iVar3 = drbg_hmac_update_isra_0(*(undefined8 *)(param_1 + 0xf8),param_4,param_5,0,0,0,0);
      return iVar3 != 0;
    }
  }
  return false;
}

