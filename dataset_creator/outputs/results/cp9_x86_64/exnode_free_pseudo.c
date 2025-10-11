
void exnode_free(undefined8 *param_1)

{
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 8) != 0)) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}

