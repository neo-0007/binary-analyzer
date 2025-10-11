
void OPENSSL_INIT_new(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(0x18,1);
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((long)pvVar1 + 0x10) = 0x32;
  }
  return;
}

