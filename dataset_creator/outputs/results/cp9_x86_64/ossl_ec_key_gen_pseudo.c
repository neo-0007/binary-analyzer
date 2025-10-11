
void ossl_ec_key_gen(long param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x148))();
  if (iVar1 != 1) {
    return;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return;
}

