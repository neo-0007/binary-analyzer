
ulong generic_aes_gcm_cipher_update(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = param_1 + 0xf8;
  pcVar5 = *(code **)(param_1 + 0x2b0);
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    if (pcVar5 != (code *)0x0) {
      if (((pcVar5 == aesni_ctr32_encrypt_blocks) && (0xf < param_3)) &&
         (pcVar5 = aesni_ctr32_encrypt_blocks, *(code **)(param_1 + 0x260) == gcm_ghash_avx)) {
        uVar3 = (ulong)(-*(int *)(param_1 + 0x268) & 0xf);
        iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_2,param_4,uVar3,aesni_ctr32_encrypt_blocks);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        lVar4 = aesni_gcm_decrypt(param_2 + uVar3,param_4 + uVar3,param_3 - uVar3,
                                  *(undefined8 *)(param_1 + 0x278),lVar1,param_1 + 0x138);
        pcVar5 = *(code **)(param_1 + 0x2b0);
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar4;
        lVar4 = uVar3 + lVar4;
        param_3 = param_3 - lVar4;
        param_4 = param_4 + lVar4;
        param_2 = param_2 + lVar4;
      }
      iVar2 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_2,param_4,param_3,pcVar5);
      return (ulong)(iVar2 == 0);
    }
    iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_2,param_4,param_3);
    uVar3 = (ulong)(iVar2 == 0);
  }
  else if (pcVar5 == (code *)0x0) {
    iVar2 = CRYPTO_gcm128_encrypt(lVar1,param_2,param_4,param_3);
    uVar3 = (ulong)(iVar2 == 0);
  }
  else {
    if (((pcVar5 == aesni_ctr32_encrypt_blocks) && (0x1f < param_3)) &&
       (pcVar5 = aesni_ctr32_encrypt_blocks, *(code **)(param_1 + 0x260) == gcm_ghash_avx)) {
      uVar3 = (ulong)(-*(int *)(param_1 + 0x268) & 0xf);
      iVar2 = CRYPTO_gcm128_encrypt(lVar1,param_2,param_4,uVar3,aesni_ctr32_encrypt_blocks);
      if (iVar2 != 0) {
        return 0;
      }
      lVar4 = aesni_gcm_encrypt(param_2 + uVar3,param_4 + uVar3,param_3 - uVar3,
                                *(undefined8 *)(param_1 + 0x278),lVar1,param_1 + 0x138);
      pcVar5 = *(code **)(param_1 + 0x2b0);
      *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + lVar4;
      lVar4 = uVar3 + lVar4;
      param_3 = param_3 - lVar4;
      param_4 = param_4 + lVar4;
      param_2 = param_2 + lVar4;
    }
    iVar2 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_2,param_4,param_3,pcVar5);
    uVar3 = (ulong)(iVar2 == 0);
  }
  return uVar3;
}

