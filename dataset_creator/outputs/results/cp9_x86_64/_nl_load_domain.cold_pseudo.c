
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _nl_load_domain_cold(void)

{
  long lVar1;
  long lVar2;
  sigaction *psVar3;
  long in_FS_OFFSET;
  bool bVar4;
  byte bVar5;
  sigset_t sStack_140;
  sigaction sStack_c0;
  undefined8 uStack_28;
  
  bVar5 = 0;
  uStack_28 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + 0x10);
  lVar1 = DAT_009394b8;
  if (DAT_009394b8 != lVar2) {
    LOCK();
    bVar4 = lock == 0;
    if (bVar4) {
      lock = 1;
    }
    UNLOCK();
    lVar1 = lVar2;
    if (!bVar4) {
      __lll_lock_wait_private(&lock);
    }
  }
  DAT_009394b8 = lVar1;
  DAT_009394b4 = DAT_009394b4 + 1;
  if (stage == 0) {
    stage = 1;
    sStack_140.__val[0] = 0x20;
    sigprocmask(1,&sStack_140,(sigset_t *)0x0);
  }
  if (stage == 1) {
    stage = 0;
    DAT_009394b4 = DAT_009394b4 + -1;
    if (DAT_009394b4 == 0) {
      DAT_009394b8 = 0;
      LOCK();
      UNLOCK();
      bVar4 = 1 < lock;
      lock = DAT_009394b4;
      if (bVar4) {
        __lll_lock_wake_private(&lock);
      }
    }
    raise(6);
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    lVar1 = DAT_009394b8;
    if (DAT_009394b8 != lVar2) {
      LOCK();
      bVar4 = lock == 0;
      if (bVar4) {
        lock = 1;
      }
      UNLOCK();
      lVar1 = lVar2;
      if (!bVar4) {
        __lll_lock_wait_private(&lock);
      }
    }
    DAT_009394b8 = lVar1;
    DAT_009394b4 = DAT_009394b4 + 1;
  }
  else if (stage != 2) goto LAB_004046d3;
  stage = 3;
  psVar3 = &sStack_c0;
  for (lVar2 = 0x26; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)&psVar3->__sigaction_handler = 0;
    psVar3 = (sigaction *)((long)psVar3 + (ulong)bVar5 * -8 + 4);
  }
  sStack_c0.sa_mask.__val[0] = 0xffffffffffffffff;
  sigaction(6,&sStack_c0,(sigaction *)0x0);
LAB_004046d3:
  if (stage == 3) {
    stage = 4;
    raise(6);
  }
  if (stage != 4) {
    if (stage != 5) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    stage = 6;
                    /* WARNING: Subroutine does not return */
    _exit(0x7f);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

