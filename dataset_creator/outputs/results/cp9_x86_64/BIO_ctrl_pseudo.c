
long BIO_ctrl(BIO *bp,int cmd,long larg,void *parg)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (bp == (BIO *)0x0) {
    return -1;
  }
  if ((bp->callback == (_func_603 *)0x0) ||
     (pcVar3 = *(code **)(bp->callback + 0x40), pcVar3 == (code *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x239,"BIO_ctrl");
    ERR_set_error(0x20,0x79,0);
    lVar2 = -2;
  }
  else {
    if ((bp->cb_arg != (char *)0x0) ||
       (lVar2._0_4_ = bp->init, lVar2._4_4_ = bp->shutdown, lVar2 != 0)) {
      lVar2 = bio_call_callback(bp,6,parg,0,cmd,larg,1,0);
      if (lVar2 < 1) {
        return lVar2;
      }
      pcVar3 = *(code **)(bp->callback + 0x40);
    }
    lVar2 = (*pcVar3)(bp,cmd,larg,parg);
    if ((bp->cb_arg == (char *)0x0) &&
       (lVar1._0_4_ = bp->init, lVar1._4_4_ = bp->shutdown, lVar1 == 0)) {
      return lVar2;
    }
    lVar2 = bio_call_callback(bp,0x86,parg,0,cmd,larg,lVar2,0);
  }
  return lVar2;
}

