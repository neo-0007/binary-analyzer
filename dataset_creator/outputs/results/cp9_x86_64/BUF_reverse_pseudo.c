
void BUF_reverse(uchar *out,uchar *in,size_t siz)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  
  puVar2 = out + (siz - 1);
  if (in == (uchar *)0x0) {
    if (siz >> 1 != 0) {
      puVar3 = puVar2;
      do {
        uVar1 = *puVar3;
        puVar4 = puVar3 + -1;
        *puVar3 = *out;
        *out = uVar1;
        puVar3 = puVar4;
        out = out + 1;
      } while (puVar2 + -(siz >> 1) != puVar4);
    }
  }
  else if (siz != 0) {
    do {
      uVar1 = *in;
      puVar3 = puVar2 + -1;
      in = in + 1;
      *puVar2 = uVar1;
      puVar2 = puVar3;
    } while (puVar3 != out + -1);
    return;
  }
  return;
}

