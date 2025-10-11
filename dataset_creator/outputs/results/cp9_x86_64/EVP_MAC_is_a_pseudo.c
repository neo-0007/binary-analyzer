
void EVP_MAC_is_a(undefined8 *param_1,undefined8 param_2)

{
  evp_is_a(*param_1,*(undefined4 *)(param_1 + 1),0,param_2);
  return;
}

