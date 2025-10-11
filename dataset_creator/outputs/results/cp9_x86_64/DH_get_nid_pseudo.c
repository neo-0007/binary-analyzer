
undefined4 DH_get_nid(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x3c);
  }
  return 0;
}

