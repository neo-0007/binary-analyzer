
long EVP_PKEY_get0_description(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    return *(long *)(param_1 + 0x68);
  }
  if (((*(long *)(param_1 + 0x60) == 0) ||
      (lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x10), lVar1 == 0)) &&
     (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    return *(long *)(lVar1 + 0x18);
  }
  return lVar1;
}

