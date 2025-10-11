
int BIO_gets(BIO *bp,char *buf,int size)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  BIO *pBVar5;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1c7,"BIO_gets");
    ERR_set_error(0x20,0xc0102,0);
    iVar3 = -1;
    goto LAB_004a8b0a;
  }
  if ((bp->callback == (_func_603 *)0x0) || (*(long *)(bp->callback + 0x38) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1cb,"BIO_gets");
    ERR_set_error(0x20,0x79,0);
    iVar3 = -2;
    goto LAB_004a8b0a;
  }
  if (size < 0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1d0,"BIO_gets");
    ERR_set_error(0x20,0x7d,0);
    iVar3 = -1;
    goto LAB_004a8b0a;
  }
  if ((bp->cb_arg != (char *)0x0) ||
     (lVar4._0_4_ = bp->init, lVar4._4_4_ = bp->shutdown, pBVar5 = bp, lVar4 != 0)) {
    pBVar5 = (BIO *)0x1;
    iVar3 = bio_call_callback(bp,5,buf,(long)size,0,0,1,0);
    if (iVar3 < 1) goto LAB_004a8b0a;
  }
  if (bp->num == 0) {
    ERR_new(pBVar5);
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1db,"BIO_gets");
    ERR_set_error(0x20,0x78,0);
    iVar3 = -1;
    goto LAB_004a8b0a;
  }
  iVar3 = (**(code **)(bp->callback + 0x38))(bp,buf,size);
  if (iVar3 < 1) {
    if (bp->cb_arg == (char *)0x0) {
      lVar2._0_4_ = bp->init;
      lVar2._4_4_ = bp->shutdown;
      if (lVar2 == 0) goto LAB_004a8b0a;
      lVar4 = (long)iVar3;
    }
    else {
      lVar4 = (long)iVar3;
    }
LAB_004a8ad7:
    iVar3 = bio_call_callback(bp,0x85,buf,(long)size,0,0,lVar4,&local_28);
    if (iVar3 < 1) goto LAB_004a8b0a;
  }
  else {
    local_28 = (ulong)iVar3;
    lVar4 = 1;
    if ((bp->cb_arg != (char *)0x0) ||
       (lVar1._0_4_ = bp->init, lVar1._4_4_ = bp->shutdown, lVar1 != 0)) goto LAB_004a8ad7;
  }
  iVar3 = (int)local_28;
  if ((ulong)(long)size < local_28) {
    iVar3 = -1;
  }
LAB_004a8b0a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

