
ulong ecx_match(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    uVar2 = 1;
    if ((param_3 & 4) != 0) {
      uVar2 = (ulong)(*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60));
    }
    if ((param_3 & 3) != 0) {
      if ((((param_3 & 2) == 0) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) ||
         ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
        if ((param_3 & 1) != 0) {
          if ((*(void **)(param_1 + 0x50) != (void *)0x0) &&
             (*(void **)(param_2 + 0x50) != (void *)0x0)) {
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
              if (*(size_t *)(param_2 + 0x58) == *(size_t *)(param_1 + 0x58)) {
                iVar1 = CRYPTO_memcmp(*(void **)(param_1 + 0x50),*(void **)(param_2 + 0x50),
                                      *(size_t *)(param_1 + 0x58));
                return (ulong)(iVar1 == 0);
              }
              return 0;
            }
            return 0;
          }
        }
        return 0;
      }
      if ((int)uVar2 != 0) {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60)) {
          return 0;
        }
        if (*(size_t *)(param_2 + 0x58) != *(size_t *)(param_1 + 0x58)) {
          return 0;
        }
        iVar1 = CRYPTO_memcmp((void *)(param_1 + 0x11),(void *)(param_2 + 0x11),
                              *(size_t *)(param_1 + 0x58));
        uVar2 = (ulong)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}

