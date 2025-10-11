
ulong BIO_do_connect_retry(BIO *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  time_t tVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  
  lVar6 = 0;
  if (0 < param_2) {
    tVar3 = time((time_t *)0x0);
    lVar6 = param_2 + tVar3;
  }
  if (param_1 == (BIO *)0x0) {
    ERR_new();
    uVar4 = 0xffffffff;
    ERR_set_debug("../crypto/bio/bio_lib.c",0x38d,"BIO_do_connect_retry");
    ERR_set_error(0x20,0xc0102,0);
  }
  else {
    if (param_3 < 0) {
      param_3 = 100;
    }
    BIO_ctrl(param_1,0x66,(ulong)(0 < param_2),(void *)0x0);
    do {
      do {
        ERR_set_mark();
        uVar4 = BIO_ctrl(param_1,0x65,0,(void *)0x0);
        if (0 < (int)uVar4) {
          ERR_clear_last_mark();
          return uVar4 & 0xffffffff;
        }
        uVar4 = ERR_peek_last_error();
        uVar2 = (uint)uVar4;
        if ((int)uVar2 < 0) {
          iVar1 = BIO_test_flags(param_1,8);
          bVar7 = iVar1 != 0;
        }
        else {
          iVar1 = BIO_test_flags(param_1,8);
          if (((char)((ulong)(long)(int)uVar2 >> 0x17) == ' ') &&
             (((uVar5 = uVar2 & 0x7fffff, uVar5 == 0x6e || (uVar5 == 0x80002)) || (uVar5 == 0x67))))
          {
            BIO_ctrl(param_1,1,0,(void *)0x0);
            bVar7 = true;
          }
          else {
            bVar7 = iVar1 != 0;
          }
        }
        if ((param_2 < 0) || (!bVar7)) {
          ERR_clear_last_mark();
          if (uVar2 != 0) {
            return 0xffffffff;
          }
          ERR_new();
          ERR_set_debug("../crypto/bio/bio_lib.c",0x3be,"BIO_do_connect_retry");
          ERR_set_error(0x20,0x67,0);
          return 0xffffffff;
        }
        ERR_pop_to_mark();
      } while (lVar6 == 0);
      uVar2 = bio_wait_part_0(param_1,lVar6,param_3);
      uVar4 = (ulong)uVar2;
    } while (0 < (int)uVar2);
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x3b7,"BIO_do_connect_retry");
    ERR_set_error(0x20,(-(uVar2 == 0) & 0x2cU) + 0x67,0);
  }
  return uVar4;
}

