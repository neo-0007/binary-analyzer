
BIO * BIO_pop(BIO *b)

{
  BIO *pBVar1;
  ulong uVar2;
  
  if (b != (BIO *)0x0) {
    pBVar1 = *(BIO **)&b->references;
    BIO_ctrl(b,7,0,b);
    uVar2 = b->num_read;
    if (uVar2 != 0) {
      *(undefined8 *)(uVar2 + 0x48) = *(undefined8 *)&b->references;
    }
    if (*(long *)&b->references != 0) {
      *(ulong *)(*(long *)&b->references + 0x50) = uVar2;
    }
    *(undefined8 *)&b->references = 0;
    b->num_read = 0;
    return pBVar1;
  }
  return (BIO *)0x0;
}

