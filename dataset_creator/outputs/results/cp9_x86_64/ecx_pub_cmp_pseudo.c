
ulong ecx_pub_cmp(long param_1,long param_2)

{
  int iVar1;
  size_t len;
  
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    iVar1 = **(int **)(param_1 + 8);
    if ((iVar1 == 0x40a) || (iVar1 == 0x43f)) {
      len = 0x20;
    }
    else {
      len = (ulong)(iVar1 != 0x40b) + 0x38;
    }
    iVar1 = CRYPTO_memcmp((void *)(*(long *)(param_1 + 0x20) + 0x11),
                          (void *)(*(long *)(param_2 + 0x20) + 0x11),len);
    return (ulong)(iVar1 == 0);
  }
  return 0xfffffffe;
}

