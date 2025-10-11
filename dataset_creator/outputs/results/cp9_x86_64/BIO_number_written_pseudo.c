
ulong BIO_number_written(BIO *bio)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (bio != (BIO *)0x0) {
    uVar1 = *(ulong *)&(bio->ex_data).dummy;
  }
  return uVar1;
}

