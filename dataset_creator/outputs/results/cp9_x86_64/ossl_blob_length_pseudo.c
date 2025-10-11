
int ossl_blob_length(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_1 + 7U >> 3;
  if (param_2 == 0) {
    if (param_3 != 0) {
      return uVar1 + 4;
    }
    return (param_1 + 0xfU >> 4) * 5 + 4 + uVar1 * 2;
  }
  if (param_3 != 0) {
    return uVar1 * 3 + 0x2c;
  }
  return uVar1 * 2 + 0x40;
}

