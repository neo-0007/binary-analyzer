
bool ossl_ctype_check(uint param_1,ushort param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 < 0x80) {
    bVar1 = (*(ushort *)(ctype_char_map + (long)(int)param_1 * 2) & param_2) != 0;
  }
  return bVar1;
}

