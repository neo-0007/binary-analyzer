
void pkey_ec_cleanup(long param_1)

{
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x98);
  if (ptr != (undefined8 *)0x0) {
    EC_GROUP_free((EC_GROUP *)*ptr);
    EC_KEY_free((EC_KEY *)ptr[2]);
    CRYPTO_free((void *)ptr[5]);
    CRYPTO_free(ptr);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}

