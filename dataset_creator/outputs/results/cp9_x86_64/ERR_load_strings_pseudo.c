
void ERR_load_strings(int lib,ERR_STRING_DATA *str)

{
  ulong uVar1;
  ERR_STRING_DATA *pEVar2;
  int iVar3;
  
  iVar3 = ossl_err_load_ERR_strings();
  if (iVar3 != 0) {
    uVar1 = str->error;
    pEVar2 = str;
    while (uVar1 != 0) {
      pEVar2->error = uVar1 | (lib & 0xffU) << 0x17;
      uVar1 = pEVar2[1].error;
      pEVar2 = pEVar2 + 1;
    }
    err_load_strings_isra_0(str);
  }
  return;
}

