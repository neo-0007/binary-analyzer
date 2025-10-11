
void value_free_hash(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    OPENSSL_LH_delete(param_2,param_1);
    return;
  }
  return;
}

