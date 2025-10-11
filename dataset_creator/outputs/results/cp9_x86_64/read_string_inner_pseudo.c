
uint read_string_inner(UI *param_1,UI_STRING *param_2,int param_3,int param_4)

{
  sigaction *psVar1;
  FILE *pFVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  sigaction *__act;
  __sigset_t *p_Var6;
  uint uVar7;
  ulong uVar8;
  sigaction *__oact;
  long in_FS_OFFSET;
  sigaction local_20e8;
  char local_204d [5];
  char local_2048 [8200];
  long local_40;
  
  __act = (sigaction *)(savsig + 0x98);
  uVar8 = 1;
  __oact = (sigaction *)(savsig + 0x98);
  psVar1 = &local_20e8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  intr_signal = 0;
  for (lVar5 = 0x12; p_Var6 = &psVar1->sa_mask, lVar5 != 0; lVar5 = lVar5 + -1) {
    psVar1 = (sigaction *)p_Var6->__val;
    p_Var6->__val[0] = 0;
  }
  local_20e8.__sigaction_handler.sa_handler = recsig;
  do {
    if ((0x1600UL >> (uVar8 & 0x3f) & 1) == 0) {
      sigaction((int)uVar8,&local_20e8,__oact);
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar7;
    __oact = __oact + 1;
  } while (uVar7 != 0x20);
  signal(0x1c,(__sighandler_t)0x0);
  pFVar2 = tty_in;
  ps_1 = 1;
  if (param_3 == 0) {
    tty_new._48_8_ = tty_orig._48_8_;
    tty_new._0_8_ = tty_orig._0_8_;
    tty_new._16_8_ = tty_orig._16_8_;
    tty_new._24_8_ = tty_orig._24_8_;
    tty_new._8_8_ = tty_orig._8_8_ & 0xfffffff7ffffffff;
    tty_new._56_4_ = tty_orig._56_4_;
    tty_new._32_8_ = tty_orig._32_8_;
    tty_new._40_8_ = tty_orig._40_8_;
    if (is_a_tty == 0) goto LAB_00583b2c;
    iVar3 = fileno(tty_in);
    iVar3 = tcsetattr(iVar3,0,(termios *)tty_new);
    if (iVar3 != -1) goto LAB_00583b2c;
    uVar7 = -(uint)(intr_signal == 2);
LAB_00583c08:
    fputc(10,tty_out);
    if (ps_1 < 2) {
LAB_00583c28:
      if (ps_1 != 1) goto LAB_00583c31;
    }
    else {
      tty_new._48_8_ = tty_orig._48_8_;
      tty_new._0_8_ = tty_orig._0_8_;
      tty_new._8_8_ = tty_orig._8_8_;
      tty_new._16_8_ = tty_orig._16_8_;
      tty_new._24_8_ = tty_orig._24_8_;
      tty_new._32_8_ = tty_orig._32_8_;
      tty_new._40_8_ = tty_orig._40_8_;
      tty_new._56_4_ = tty_orig._56_4_;
      if (is_a_tty != 0) {
        iVar3 = fileno(tty_in);
        iVar3 = tcsetattr(iVar3,0,(termios *)tty_new);
        if (iVar3 == -1) {
          uVar7 = 0;
        }
      }
    }
  }
  else {
LAB_00583b2c:
    ps_1 = 2;
    local_2048[0] = '\0';
    pcVar4 = fgets(local_2048,0x1fff,pFVar2);
    pFVar2 = tty_in;
    if (((pcVar4 == (char *)0x0) || (iVar3 = feof(tty_in), iVar3 != 0)) ||
       (iVar3 = ferror(pFVar2), iVar3 != 0)) {
      uVar7 = 0;
    }
    else {
      pcVar4 = strchr(local_2048,10);
      if (pcVar4 == (char *)0x0) {
        do {
          pcVar4 = fgets(local_204d,4,pFVar2);
          if (pcVar4 == (char *)0x0) {
            uVar7 = 0;
            goto LAB_00583b75;
          }
          pcVar4 = strchr(local_204d,10);
        } while (pcVar4 == (char *)0x0);
      }
      else if (param_4 != 0) {
        *pcVar4 = '\0';
      }
      uVar7 = UI_set_result(param_1,param_2,local_2048);
      uVar7 = ~uVar7 >> 0x1f;
    }
LAB_00583b75:
    if (intr_signal == 2) {
      uVar7 = 0xffffffff;
    }
    if (param_3 == 0) goto LAB_00583c08;
    if (ps_1 < 2) goto LAB_00583c28;
  }
  iVar3 = 1;
  do {
    if ((iVar3 - 10U & 0xfffffffd) != 0) {
      sigaction(iVar3,__act,(sigaction *)0x0);
    }
    iVar3 = iVar3 + 1;
    __act = __act + 1;
  } while (iVar3 != 0x20);
LAB_00583c31:
  OPENSSL_cleanse(local_2048,0x2000);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}

