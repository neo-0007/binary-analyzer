
undefined4 EC_KEY_decoded_from_explicit_params(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28);
  }
  return 0xffffffff;
}

