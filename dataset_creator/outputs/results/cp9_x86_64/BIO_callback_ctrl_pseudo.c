
long BIO_callback_ctrl(BIO *b,int cmd,fp *fp)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  fp *local_10;
  
  if (b == (BIO *)0x0) {
    lVar2 = -2;
  }
  else {
    local_10 = fp;
    if (((b->callback == (_func_603 *)0x0) || (pcVar3 = *(code **)(b->callback + 0x58), cmd != 0xe))
       || (pcVar3 == (code *)0x0)) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_lib.c",0x254,"BIO_callback_ctrl");
      ERR_set_error(0x20,0x79,0);
      lVar2 = -2;
    }
    else {
      if ((b->cb_arg != (char *)0x0) ||
         (lVar2._0_4_ = b->init, lVar2._4_4_ = b->shutdown, lVar2 != 0)) {
        lVar2 = bio_call_callback(b,6,&local_10,0,0xe,0,1,0);
        if (lVar2 < 1) {
          return lVar2;
        }
        pcVar3 = *(code **)(b->callback + 0x58);
      }
      lVar2 = (*pcVar3)(b,0xe,local_10);
      if ((b->cb_arg == (char *)0x0) &&
         (lVar1._0_4_ = b->init, lVar1._4_4_ = b->shutdown, lVar1 == 0)) {
        return lVar2;
      }
      lVar2 = bio_call_callback(b,0x86,&local_10,0,0xe,0,lVar2,0);
    }
  }
  return lVar2;
}

