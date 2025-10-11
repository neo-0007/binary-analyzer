
void ossl_ffc_params_enable_flags(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x40);
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x40) | param_2;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  return;
}

