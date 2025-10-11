
void EVP_MD_is_a(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    evp_is_a(*(long *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x58),0,param_2);
    return;
  }
  uVar1 = EVP_MD_get0_name();
  evp_is_a(0,0,uVar1,param_2);
  return;
}

