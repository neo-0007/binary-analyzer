
int Camellia_set_key(uchar *userKey,int bits,CAMELLIA_KEY *key)

{
  int iVar1;
  
  if (userKey == (uchar *)0x0) {
    return -1;
  }
  if (key != (CAMELLIA_KEY *)0x0) {
    if (((bits & 0xffffffbfU) != 0x80) && (bits != 0x100)) {
      return -2;
    }
    iVar1 = Camellia_Ekeygen(bits,userKey,key);
    key->grand_rounds = iVar1;
    return 0;
  }
  return -1;
}

