
void EVP_PKEY_meth_get_keygen(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x30);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}

