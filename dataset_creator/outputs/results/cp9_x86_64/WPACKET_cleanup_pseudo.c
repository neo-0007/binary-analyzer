
void WPACKET_cleanup(long param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x28);
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*ptr;
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

