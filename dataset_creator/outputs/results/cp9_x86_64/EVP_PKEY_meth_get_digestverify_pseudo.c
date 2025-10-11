
void EVP_PKEY_meth_get_digestverify(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0xd8);
  }
  return;
}

