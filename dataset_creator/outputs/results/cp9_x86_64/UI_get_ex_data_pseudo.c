
void * UI_get_ex_data(UI *r,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(r + 0x18),idx);
  return pvVar1;
}

