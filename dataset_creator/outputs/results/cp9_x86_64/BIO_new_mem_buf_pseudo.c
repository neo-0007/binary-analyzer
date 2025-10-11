
BIO * BIO_new_mem_buf(void *buf,int len)

{
  _func_603 *p_Var1;
  char *pcVar2;
  _func_596 *p_Var3;
  BIO_METHOD *pBVar4;
  BIO *pBVar5;
  _func_595 *p_Var6;
  
  if (buf == (void *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_mem.c",0x5a,"BIO_new_mem_buf");
    ERR_set_error(0x20,0xc0102,0);
    pBVar5 = (BIO *)0x0;
  }
  else {
    p_Var6 = (_func_595 *)(long)len;
    if (len < 0) {
      p_Var6 = (_func_595 *)strlen((char *)buf);
    }
    pBVar4 = BIO_s_mem();
    pBVar5 = BIO_new(pBVar4);
    if (pBVar5 != (BIO *)0x0) {
      pBVar4 = pBVar5->prev_bio->method;
      p_Var1 = pBVar5->prev_bio->callback;
      pBVar4->name = (char *)buf;
      *(_func_595 **)pBVar4 = p_Var6;
      pcVar2 = pBVar4->name;
      pBVar4->bwrite = p_Var6;
      *(size_t *)p_Var1 = *(size_t *)pBVar4;
      *(char **)(p_Var1 + 8) = pcVar2;
      p_Var3 = pBVar4->bread;
      *(_func_595 **)(p_Var1 + 0x10) = pBVar4->bwrite;
      *(_func_596 **)(p_Var1 + 0x18) = p_Var3;
      *(uint *)&pBVar5->ptr = *(uint *)&pBVar5->ptr | 0x200;
      *(undefined4 *)&pBVar5->next_bio = 0;
    }
  }
  return pBVar5;
}

