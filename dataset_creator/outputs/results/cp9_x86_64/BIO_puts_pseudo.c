
int BIO_puts(BIO *bp,char *buf)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  BIO *pBVar6;
  ulong local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x196,"BIO_puts");
    ERR_set_error(0x20,0xc0102,0);
    uVar5 = 0xffffffff;
    goto LAB_004a88cc;
  }
  if ((bp->callback == (_func_603 *)0x0) || (*(long *)(bp->callback + 0x30) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x19a,"BIO_puts");
    ERR_set_error(0x20,0x79,0);
    uVar5 = 0xfffffffe;
    goto LAB_004a88cc;
  }
  if ((bp->cb_arg != (char *)0x0) ||
     (lVar3._0_4_ = bp->init, lVar3._4_4_ = bp->shutdown, pBVar6 = bp, lVar3 != 0)) {
    pBVar6 = (BIO *)0x1;
    uVar5 = bio_call_callback(bp,4,buf,0,0,0,1,0);
    if ((int)uVar5 < 1) goto LAB_004a88cc;
  }
  if (bp->num == 0) {
    ERR_new(pBVar6);
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1a5,"BIO_puts");
    ERR_set_error(0x20,0x78,0);
    uVar5 = 0xffffffff;
    goto LAB_004a88cc;
  }
  uVar5 = (**(code **)(bp->callback + 0x30))(bp,buf);
  if ((int)uVar5 < 1) {
    if (bp->cb_arg == (char *)0x0) {
      lVar4._0_4_ = bp->init;
      lVar4._4_4_ = bp->shutdown;
      goto joined_r0x004a8925;
    }
  }
  else {
    local_28 = (ulong)(int)uVar5;
    piVar1 = &(bp->ex_data).dummy;
    *(ulong *)piVar1 = *(long *)piVar1 + local_28;
    if (bp->cb_arg == (char *)0x0) {
      lVar4._0_4_ = bp->init;
      lVar4._4_4_ = bp->shutdown;
joined_r0x004a8925:
      if (lVar4 == 0) goto LAB_004a88cc;
    }
  }
  uVar5 = bio_call_callback(bp,0x84,buf,0,0,0);
  if ((0 < (int)uVar5) && (uVar5 = local_28, 0x7fffffff < local_28)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x1b7,"BIO_puts");
    ERR_set_error(0x20,0x66,0);
    uVar5 = 0xffffffff;
  }
LAB_004a88cc:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

