
int DES_is_weak_key(const_DES_cblock *key)

{
  uint uVar1;
  uint uVar2;
  undefined1 *a;
  undefined1 *puVar3;
  
  uVar2 = 0;
  a = weak_keys;
  do {
    puVar3 = a + 8;
    uVar1 = CRYPTO_memcmp(a,key,8);
    uVar2 = uVar2 | (int)(uVar1 - 1 & ~uVar1) >> 0x1f;
    a = puVar3;
  } while (puVar3 != odd_parity);
  return uVar2 & 1;
}

