
BIO * BIO_dup_chain(BIO *in)

{
  int iVar1;
  BIO *a;
  long lVar2;
  BIO *b;
  BIO *a_00;
  
  if (in == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  b = (BIO *)0x0;
  a_00 = (BIO *)0x0;
  do {
    a = BIO_new((BIO_METHOD *)in->callback);
    if (a == (BIO *)0x0) {
LAB_004a9548:
      BIO_free_all(a_00);
      return (BIO *)0x0;
    }
    a->cb_arg = in->cb_arg;
    iVar1 = in->shutdown;
    a->init = in->init;
    a->shutdown = iVar1;
    iVar1 = in->retry_reason;
    a->flags = in->flags;
    a->retry_reason = iVar1;
    a->num = in->num;
    *(undefined4 *)&a->field_0x2c = *(undefined4 *)&in->field_0x2c;
    *(undefined4 *)&a->ptr = *(undefined4 *)&in->ptr;
    *(undefined4 *)&a->next_bio = *(undefined4 *)&in->next_bio;
    lVar2 = BIO_ctrl(in,0xc,0,a);
    if ((lVar2 == 0) ||
       (iVar1 = CRYPTO_dup_ex_data(0xc,(CRYPTO_EX_DATA *)(a + 1),(CRYPTO_EX_DATA *)(in + 1)),
       iVar1 == 0)) {
      BIO_free(a);
      goto LAB_004a9548;
    }
    if (a_00 == (BIO *)0x0) {
      in = *(BIO **)&in->references;
      b = a;
      a_00 = a;
      if (in == (BIO *)0x0) {
        return a;
      }
    }
    else {
      BIO_push(b,a);
      in = *(BIO **)&in->references;
      b = a;
      if (in == (BIO *)0x0) {
        return a_00;
      }
    }
  } while( true );
}

