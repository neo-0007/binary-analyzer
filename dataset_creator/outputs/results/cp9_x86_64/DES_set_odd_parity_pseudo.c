
void DES_set_odd_parity(DES_cblock *key)

{
  uchar *puVar1;
  uchar *puVar2;
  
  puVar1 = *key;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = odd_parity[*puVar1];
    puVar1 = puVar2;
  } while ((DES_cblock *)puVar2 != key + 1);
  return;
}

