
void uint64_print(BIO *param_1,undefined8 *param_2,long param_3)

{
  if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
    BIO_printf(param_1,"%ju\n",*(undefined8 *)*param_2);
    return;
  }
  BIO_printf(param_1,"%jd\n",*(undefined8 *)*param_2);
  return;
}

