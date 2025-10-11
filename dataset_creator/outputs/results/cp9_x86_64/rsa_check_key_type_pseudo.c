
bool rsa_check_key_type(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = RSA_test_flags(param_1,0xf000);
  if (iVar1 == 0) {
    return param_2 == 6;
  }
  if (iVar1 == 0x1000) {
    return param_2 == 0x390;
  }
  return false;
}

